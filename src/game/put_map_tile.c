/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_map_tile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:40:09 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:19:48 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_tile(t_game *game, char tile, t_player_pos point, int img_index)
{
	if (tile == FLOOR || tile == 0)
		mlx_put_image_to_window(game->mlx, game->window,
			game->floor_img.img, point.x * TILE_SIZE, point.y * TILE_SIZE);
	else if (tile == EXIT)
		mlx_put_image_to_window(game->mlx, game->window,
			game->exit_img.img, point.x * TILE_SIZE, point.y * TILE_SIZE);
	else if (tile == COLLECTIBLE)
		mlx_put_image_to_window(game->mlx, game->window,
			game->coltbl_img.img, point.x * TILE_SIZE, point.y * TILE_SIZE);
	else if (tile == PLAYER)
		mlx_put_image_to_window(game->mlx, game->window,
			game->player_img[img_index].img,
			point.x * TILE_SIZE, point.y * TILE_SIZE);
}
