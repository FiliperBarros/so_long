/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:13:52 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/21 14:46:15 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **argv)
{
	t_game	game;
	check_args(ac, argv);
	parser(argv[1], &game);
	init_game(&game);
	return (0);
}