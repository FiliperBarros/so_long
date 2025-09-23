/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 22:26:40 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 13:13:33 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_map_grid(t_game *game)
{
	char	*inline_file;

	inline_file = file_to_inline(game->map_file);
	if (ft_strnstr(inline_file, "\n\n", ft_strlen(inline_file)))
		exit_error("There is an empty row in your file!", NULL);
	if (game->map.grid)
		ft_free_array(game->map.grid);
	game->map.grid = ft_split(inline_file, '\n');
	free(inline_file);
}
