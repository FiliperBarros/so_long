/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:13:34 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/21 17:54:51 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_textures(t_game *g)
{
	g->floor_img.img = mlx_xpm_file_to_image(g->mlx, S_XPM, &g->x, &g->y); 
	g->wall_img.img = mlx_xpm_file_to_image(g->mlx, W_XPM, &g->x, &g->y);
	g->coltbl_img.img = mlx_xpm_file_to_image(g->mlx, C_XPM, &g->x, &g->y);
	g->exit_img.img = mlx_xpm_file_to_image(g->mlx, E_XPM, &g->x, &g->y);
	g->player_img.img = mlx_xpm_file_to_image(g->mlx, P1_XPM, &g->x, &g->y);
	// g->player_img[1].img = mlx_xpm_file_to_image(g->mlx, P2_XPM, &g->x, &g->y);
	// g->player_img[2].img = mlx_xpm_file_to_image(g->mlx, P3_XPM, &g->x, &g->y);
	// g->player_img[3].img = mlx_xpm_file_to_image(g->mlx, P4_XPM, &g->x, &g->y);
	// g->player_img[4].img = mlx_xpm_file_to_image(g->mlx, P5_XPM, &g->x, &g->y);
	// g->player_img[5].img = mlx_xpm_file_to_image(g->mlx, P6_XPM, &g->x, &g->y);
	 if (!g->wall_img.img || !g->floor_img.img || !g->exit_img.img
		|| !g->coltbl_img.img || !g->player_img.img)
		// || !g->player_img[1].img || !g->player_img[2].img
		// || !g->player_img[3].img || !g->player_img[4].img
		// || !g->player_img[5].img)
		exit_error("Couldn't load textures.", g);
}
