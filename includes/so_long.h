/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:37:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/21 17:54:37 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/******************************************************************************/
/*                                  Libraries                                 */
/******************************************************************************/
# include "fcntl.h"
# include "libft.h"
# include "mlx.h"

/******************************************************************************/
/*                               MACROS                                       */
/******************************************************************************/

# define TILE_SIZE	64
# define TILES 		"01CEP"
# define W_XPM		"textures/1.xpm"
# define S_XPM		"textures/0.xpm"
# define E_XPM		"textures/E.xpm"
# define C_XPM		"textures/C.xpm"
# define P1_XPM		"textures/P.xpm"
# define P2_XPM		"textures/P1.xpm"
# define P3_XPM		"textures/P1.xpm"
# define P4_XPM		"textures/P1.xpm"
# define P5_XPM		"textures/P1.xpm"
# define P6_XPM		"textures/P1.xpm"

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


typedef	struct s_player_pos
{
	int	x;
	int	y;
}				t_player_pos;

typedef struct s_player
{
	t_player_pos	current_pos;
	t_player_pos	next_pos;
}				t_player;

typedef struct s_map
{
	char			**grid;
	size_t 			rows;
	size_t 			cols;
}				t_map;

typedef struct s_img
{
	void 			*img;
	int				width;
	int				height;
}		t_img;

typedef struct s_game
{
	char			*map_file;
	void			*mlx;
	void			*window;
	t_map			map;
	t_player		player;
	int				collectible_count;
	int				exit_count;
	int				player_count;
	t_img			coltbl_img;
	t_img			exit_img;
	t_img			wall_img;
	t_img			floor_img;
	t_img			player_img;
	int				x;
	int				y;
}				t_game;

/******************************************************************************/
/*                               PARSER                                       */
/******************************************************************************/

void	check_filename(char *filename);
void	check_map_size(t_game *game);
void	check_valid_chars(t_game *game);
void	check_valid_path(t_game *game, t_player_pos current_pos);
void	check_walls(t_game	*game);
void	create_map_grid(t_game *game);
void	parser(char *filename	, t_game *game);
void	validate_map(t_game *game);

/******************************************************************************/
/*                               UTILS                                        */
/******************************************************************************/

void	check_args(int ac, char **argv);
void	exit_error(char *error_message, t_game *game);
char	*file_to_inline(char *filename);
void	ft_free_array(char **array);



void	init_game(t_game *game);
void	render_map(t_game *game, int i, int j);
void	load_textures(t_game *g);
#endif
