/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 22:26:40 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/17 22:26:48 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_map_grid(char *filename, t_game *game)
{
	char *inline_file;

	inline_file = file_to_inline(filename);
	if (game->map.grid)
		ft_free_array(game->map.grid);
	game->map.grid = ft_split(inline_file, '\n');
	free(inline_file);
}
