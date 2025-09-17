/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */	
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:13:36 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/12 16:26:14 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_error(char *error_message, t_game *game)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(error_message, 2);
	ft_putstr_fd("\n", 2);
	// ft_free_game(game)
	game->map.rows = game->map.rows;
	exit(EXIT_FAILURE);
}
