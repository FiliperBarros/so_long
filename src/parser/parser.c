/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:02:54 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 11:50:45 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	parser(int ac, char **argv, t_game *game)
{
	check_args(ac, argv);
	ft_bzero(game, sizeof(*game));
	game->map_file = argv[1];
	validate_map(game);
}
