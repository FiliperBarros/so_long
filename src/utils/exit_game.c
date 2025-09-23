/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:21:47 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:07:43 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_game(char *message, t_game *game)
{
	ft_putstr_fd(message, 1);
	ft_putstr_fd("\n", 1);
	free_game(game);
	exit(EXIT_SUCCESS);
}
