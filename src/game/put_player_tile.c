/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_player_tile.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:27:14 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:16:32 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_player_tile(t_game *game)
{
	mlx_put_image_to_window(game->mlx, game->window,
		game->player_img[game->player.img_index].img,
		game->player.current_pos.x * TILE_SIZE,
		game->player.current_pos.y * TILE_SIZE);
}
