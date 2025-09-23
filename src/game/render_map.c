/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:19:14 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:17:17 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	render_map(t_game *game, int i, int j)
{
	t_img	*tile;

	tile = &game->wall_img;
	while (++i < (int)game->map.rows)
	{
		j = -1;
		while (++j < (int)game->map.cols)
		{
			if (game->map.grid[i][j] == WALL)
				tile = &game->wall_img;
			else if (game->map.grid[i][j] == FLOOR)
				tile = &game->floor_img;
			else if (game->map.grid[i][j] == COLLECTIBLE)
				tile = &game->coltbl_img;
			else if (game->map.grid[i][j] == EXIT)
				tile = &game->exit_img;
			else if (game->map.grid[i][j] == PLAYER)
				tile = &game->player_img[1];
			mlx_put_image_to_window(game->mlx, game->window, tile->img,
				j * TILE_SIZE, i * TILE_SIZE);
		}
	}
}
