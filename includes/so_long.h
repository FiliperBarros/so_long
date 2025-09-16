/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:37:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/15 20:14:55 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include "fcntl.h"

typedef struct s_map
{
	char	**grid;
	size_t 	rows;
	size_t 	cols;
}		t_map;

typedef struct s_game
{
	t_map	map;
}		t_game;

void	check_filename(char *filename);
void	validate_map(char *filename, t_game *game);
void	create_grid(int fd, t_game *game);
void	exit_error(char *message);

#endif
