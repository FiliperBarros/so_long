/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_chars.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:38:06 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/22 10:15:35 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	count_chars(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map.grid[i])
	{
		j = 0;
		while (game->map.grid[i][j])
		{
			if (game->map.grid[i][j] == PLAYER)
			{
				game->player.current_pos = (t_player_pos){i, j};
				game->player_count++;
			}
			else if (game->map.grid[i][j] == EXIT)
				game->exit_count++;
			else if (game->map.grid[i][j] == COLLECTIBLE)
				game->collectible_count++;
			else if (!ft_strchr(TILES, game->map.grid[i][j]))
				exit_error("Map has invalid tiles", game);
			j++;
		}
		i++;
	}
}
static void validate_chars_counter(t_game *game)
{
	if(game->player_count != 1)
		exit_error("Invalid number of players on the map", game);
	if (game->exit_count != 1)
		exit_error("Invalid number of exits on the map", game);
	if(game->collectible_count < 1)
		exit_error("Invalid number of collectibles on the map", game);
}
void	check_valid_chars(t_game *game)
{
	count_chars(game);
	validate_chars_counter(game);
	ft_printf("x: %d\n y: %d\n", game->player.current_pos.x, game->player.current_pos.y);
}