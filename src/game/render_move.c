/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:38:55 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:18:03 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	render_move(t_game *game, char current, char next, t_player *player)
{
	put_tile(game, current, player->current_pos, player->img_index);
	put_tile(game, next, player->next_pos, player->img_index);
}
