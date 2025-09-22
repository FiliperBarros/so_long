/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:18:46 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/22 12:42:12 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../libs/minilibx/mlx.h"

void	run_game(t_game *game)
{
	mlx_hook(game->window, 2, 0L, key_press, game);
	mlx_loop(game->mlx);
}
