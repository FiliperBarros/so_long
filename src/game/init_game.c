/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:17:34 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:15:07 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_game *game)
{
	create_map_grid(game);
	game->mlx = mlx_init();
	if (!game->mlx)
		exit_error("Mlx failed to open.", game);
	load_textures(game);
	game->window = mlx_new_window(game->mlx, game->map.cols * TILE_SIZE,
			game->map.rows * TILE_SIZE, "so_long");
	if (!game->window)
		exit_error("Couldn't create window!", game);
	render_map(game, -1, -1);
}
