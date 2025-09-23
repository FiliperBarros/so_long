/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 22:27:04 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:09:25 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_walls(t_game	*game)
{
	int	i;

	i = 0;
	while (game->map.grid[i])
	{
		if (game->map.grid[i][0] != WALL)
			exit_error("Error\nMap is not surrounded by walls!\n", game);
		if (game->map.grid[i][game->map.cols - 1] != WALL)
			exit_error("Error\nMap is not surrounded by walls!\n", game);
		i++;
	}
	i = 0;
	while (game->map.grid[0][i] && game->map.grid[game->map.rows - 1][i])
	{
		if (game->map.grid[0][i] != WALL)
			exit_error("Error\nMap is not surrounded by walls!\n", game);
		if (game->map.grid[game->map.rows -1][i] != WALL)
			exit_error("Error\nMap is not surrounded by walls!\n", game);
		i++;
	}
}
