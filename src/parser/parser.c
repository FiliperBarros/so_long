/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:02:54 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/21 16:01:24 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	parser(char *filename, t_game *game)
{
	ft_bzero(game, sizeof(*game));
	game->map_file = filename;
	validate_map(game);
}
