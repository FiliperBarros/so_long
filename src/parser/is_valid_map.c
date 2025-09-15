/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:37:19 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/15 16:49:00 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void	create_in_line_map(int fd)
// {
// 	get_next_line(fd)
// }
// void	is_valid_map(char *filename, t_game *game)
// {
// 	int	fd;
// 	char *in_line_map;
	
// 	fd = open(filename, O_RDONLY);
// 	if (!fd)
// 		exit_error("File missing or access denied\n");
// 	check_cols(fd, game)
// 	// check_map_size(in_line_map);
// 	// check_flags;
// 	// check_valid_exit;
// }

void	check_cols(int fd, t_game *game)
{
	char	*line;
	
	line = get_next_line(fd);
	game->map.cols = ft_strclen(line, '\n');
	if (game->map.cols < 3)
	{	
		free(line);
		exit_error("Invalid columns\n");
	}
	while (line)
	{
		if(ft_strclen(line, '\n') != game->map.cols)
		{
			free(line);
			exit_error("Invalid columns\n");			
		}
		game->map.rows++;
		free(line);
		line = get_next_line(fd);
	}
	exit_error("success");
	close(fd);
}
int	main(void)
{
	t_game game;
	
	int	fd = open("teste",O_RDONLY);
	check_cols(fd, &game);
}	
	
//check the size 
//check the minimum flags 1exit 1 starting position and 1 collectible
	//If the map contains duplicate characters (exit/start), an error
		//message should be displayed.
	//• If any misconfiguration is encountered in the file, the program must exit cleanly,
		//and return "Error\n" followed by an explicit error message of your choice.
// check if there is an valid path