/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:37:19 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:12:42 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	validate_map(t_game *game)
{
	create_map_grid(game);
	check_map_size(game);
	check_walls(game);
	check_valid_chars(game);
	check_valid_path(game, game->player.current_pos);
}
