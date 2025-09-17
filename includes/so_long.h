/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:37:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/17 22:32:19 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/******************************************************************************/
/*                                  Libraries                                 */
/******************************************************************************/
# include "fcntl.h"
# include "libft.h"


# define TILES "01CEP"
/******************************************************************************/
/*                               ENUMS                                        */
/******************************************************************************/

typedef enum e_tile
{
	WALL        = '1',
	SPACE       = '0',
	EXIT        = 'E',
	COLLECTIBLE = 'C',
	PLAYER      = 'P',
	VISITED     = 'V'
}	t_tile;

typedef enum e_key
{
	KEY_W		= 119,
	KEY_A		= 97,
	KEY_S		= 115,
	KEY_D		= 100,
	KEY_ESC		= 65307,
	KEY_UP		= 65362,
	KEY_LEFT	= 65361,
	KEY_DOWN	= 65364,
	KEY_RIGHT	= 65363,
}	t_key;

/******************************************************************************/
/*                               STRUCTS                                      */
/******************************************************************************/

typedef struct s_map
{
	char	**grid;
	size_t 	rows;
	size_t 	cols;
}		t_map;

typedef struct s_game
{
	t_map	map;
	int		collectible_count;
	int		exit_count;
	int		player_count;
}		t_game;

/******************************************************************************/
/*                               PARSER                                       */
/******************************************************************************/

void	check_filename(char *filename);
void	check_map_size(t_game *game);
void	check_valid_chars(t_game *game);
void	create_map_grid(char *filename, t_game *game);
void	parser(char **argv, t_game *game);
void	validate_map(char *filename, t_game *game);

/******************************************************************************/
/*                               UTILS                                        */
/******************************************************************************/

void	ft_free_array(char **array);
void	exit_error(char *error_message, t_game *game);
char	*file_to_inline(char *filename);
void	check_args(int ac, char **argv);

#endif
