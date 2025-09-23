/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:58:04 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:17:51 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	render_next_position(t_game *game, int x, int y)
{
	game->player.next_pos = (t_player_pos){y, x};
	render_move(game, game->player.current_tile, PLAYER, &game->player);
	game->map.grid[game->player.current_pos.y][game->player.current_pos.x]
		= game->player.current_tile;
	game->player.current_pos = game->player.next_pos;
	game->player.current_tile = game->map.grid[y][x];
	game->map.grid[y][x] = PLAYER;
}

void	check_move(t_game *game, int x, int y)
{
	if (game->map.grid[y][x] == WALL)
		return ;
	print_moves(game);
	if (game->map.grid[y][x] == COLLECTIBLE)
	{
		game->map.grid[y][x] = FLOOR;
		game->collectible_count--;
	}
	else if (game->map.grid[y][x] == EXIT && !game->collectible_count)
		exit_game("Congrats! You successfuly passed the game.", game);
	else if (game->map.grid[y][x] == EXIT)
		ft_printf("You should deliver the corn to the Boss pigeon!");
	render_next_position(game, x, y);
}
