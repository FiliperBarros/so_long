/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:13:52 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/15 16:45:25 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **argv)
{
	t_game	game;
	if (ac != 2)
		exit_error("Usage: ./solong <map_name.ber");
	// is_valid_filename(argv[1]);
	is_valid_map(argv[1], &game);
	return (0);
}