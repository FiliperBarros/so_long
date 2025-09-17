/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:37:19 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/17 22:35:05 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	validate_map(char *filename, t_game *game)
{
	create_map_grid(filename, game);
	check_map_size(game);
	check_walls(game);
	check_valid_chars(game);
	check_valid_path(game);
}
	
//check the size 
//check the minimum flags 1exit 1 starting position and 1 collectible
	//If the map contains duplicate characters (exit/start), an error
		//message should be displayed.
	//• If any misconfiguration is encountered in the file, the program must exit cleanly,
		//and return "Error\n" followed by an explicit error message of your choice.
// check if there is an valid path