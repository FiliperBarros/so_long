/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:10:42 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:08:54 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	free_textures(t_game *game)
{
	if (game->wall_img.img)
		mlx_destroy_image(game->mlx, game->wall_img.img);
	if (game->floor_img.img)
		mlx_destroy_image(game->mlx, game->floor_img.img);
	if (game->coltbl_img.img)
		mlx_destroy_image(game->mlx, game->coltbl_img.img);
	if (game->exit_img.img)
		mlx_destroy_image(game->mlx, game->exit_img.img);
	if (game->player_img[0].img)
		mlx_destroy_image(game->mlx, game->player_img[0].img);
	if (game->player_img[1].img)
		mlx_destroy_image(game->mlx, game->player_img[1].img);
}

void	free_game(t_game *game)
{
	if (game)
	{
		free_textures(game);
		if (game->map.grid)
			ft_free_array(game->map.grid);
		if (game->mlx && game ->window)
			mlx_destroy_window(game->mlx, game->window);
		if (game->mlx)
		{
			mlx_destroy_display(game->mlx);
			free(game->mlx);
		}
	}
}
