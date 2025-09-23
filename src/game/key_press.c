/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:23:23 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:17:32 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	put_tile_check_move(int keycode, t_game *game)
{
	put_player_tile(game);
	if (keycode == KEY_W || keycode == KEY_UP)
		check_move(game, game->player.current_pos.x,
			game->player.current_pos.y - 1);
	else if (keycode == KEY_A || keycode == KEY_LEFT)
		check_move(game, game->player.current_pos.x - 1,
			game->player.current_pos.y);
	else if (keycode == KEY_S || keycode == KEY_DOWN)
		check_move(game, game->player.current_pos.x,
			game->player.current_pos.y + 1);
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
		check_move(game, game->player.current_pos.x + 1,
			game->player.current_pos.y);
}

int	key_press(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == KEY_UP)
		put_tile_check_move(keycode, game);
	else if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		game->player.img_index = RUN_LEFT;
		put_tile_check_move(keycode, game);
	}
	else if (keycode == KEY_S || keycode == KEY_DOWN)
		put_tile_check_move(keycode, game);
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
		game->player.img_index = RUN_RIGHT;
		put_tile_check_move(keycode, game);
	}
	else if (keycode == KEY_ESC)
		exit_game("Game closed!", game);
	return (0);
}
