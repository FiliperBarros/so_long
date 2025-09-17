/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:37:19 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/17 16:33:30 by frocha-b         ###   ########.fr       */
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

void	check_walls(t_game	*game)
{
	int	i;
	
	i = 0;
	while (game->map.grid[i])
	{
		if (game->map.grid[i][0] != WALL)
			exit_error("Error\nMap is not surrounded by walls!\n", game);
		if (game->map.grid[i][game->map.cols - 1] != WALL)
			exit_error("Error\nMap is not surrounded by walls!\n", game);
		i++;
	}
	i = 0;
	while (game->map.grid[0][i] && game->map.grid[game->map.rows - 1][i])
	{
		if (game->map.grid[0][i] != WALL)
			exit_error("Error\nMap is not surrounded by walls!\n", game);
		if (game->map.grid[game->map.rows -1][i] != WALL)
			exit_error("Error\nMap is not surrounded by walls!\n", game);
		i++;
	}
}

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


void	validate_map(char *filename, t_game *game)
{
	create_map_grid(filename, game);
	check_map_size(game);
	check_walls(game);
	check_valid_chars(game);
}
	
//check the size 
//check the minimum flags 1exit 1 starting position and 1 collectible
	//If the map contains duplicate characters (exit/start), an error
		//message should be displayed.
	//• If any misconfiguration is encountered in the file, the program must exit cleanly,
		//and return "Error\n" followed by an explicit error message of your choice.
// check if there is an valid path