/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 22:28:03 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/17 22:28:20 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map_size(t_game *game)
{
	size_t i;
	
	i = 0;
	while (game->map.grid[i])
	{
		game->map.cols = ft_strlen(game->map.grid[i]);
		if (ft_strlen(game->map.grid[i]) != game->map.cols)
			exit_error("Error\nNot a retangular map.\n", game);
		i++;
	}
	game->map.rows = i;
	ft_printf("cols_size: %i\n", game->map.cols);
	ft_printf("rows_size: %i\n", game->map.rows);
}
