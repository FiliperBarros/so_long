/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:23:23 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/22 13:01:34 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	key_press(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == KEY_UP)
	{

	}
	else if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		
	}
	else if (keycode == KEY_S || keycode == KEY_DOWN)
	{
	
	}
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
	
	}
	else if (keycode == KEY_ESC)
		exit_game("Don't let the Boss pigeon hungry!", game);
}
