/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 22:34:24 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/18 16:57:20 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_valid_path(t_game *game, t_player_pos current_pos)
{
	static int	collectible;
	static int	exit;
	char		tile;

	tile = game->map.grid[current_pos.y][current_pos.x];
	if(tile == WALL || tile == VISITED)
		return ;
	if (tile == EXIT)
		exit++;
	else if(tile == COLLECTIBLE)
		collectible++;
	game->map.grid[current_pos.y][current_pos.x] = VISITED;
	check_valid_path(game, (t_player_pos){current_pos.y, current_pos.x + 1});
	check_valid_path(game, (t_player_pos){current_pos.y, current_pos.x - 1});	
	check_valid_path(game, (t_player_pos){current_pos.y + 1, current_pos.x});	
	check_valid_path(game, (t_player_pos){current_pos.y - 1, current_pos.x});
	if (current_pos.y == game->player.current_pos.y
		&& current_pos.x == game->player.current_pos.x)
		if(collectible != game->collectible_count || exit != game->exit_count)
		exit_error("Map has invalid path!", game);	

}