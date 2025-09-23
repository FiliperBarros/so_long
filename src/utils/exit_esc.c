/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_esc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:37:36 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/22 17:20:53 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int		exit_esc(t_game *game)
{
	ft_putstr_fd("Game finished!", 1);
	ft_putstr_fd("\n", 1);
	free_game(game);
	exit(EXIT_SUCCESS);
}