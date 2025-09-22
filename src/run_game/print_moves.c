/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:40:03 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/22 13:00:52 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_moves(t_game *game)
{
	ft_putstr_fd("Moves:", 1);
	ft_putnbr_fd(++game->moves_counter, 1);
	ft_putchar('\n', 1);
}
