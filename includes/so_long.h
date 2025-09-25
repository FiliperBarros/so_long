/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:37:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/25 16:14:25 by frocha-b         ###   ########.fr       */
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
# define F_XPM		"textures/0.xpm"
# define E_XPM		"textures/E.xpm"
# define C_XPM		"textures/C.xpm"
# define P_L_XPM	"textures/P.xpm"
# define P_R_XPM	"textures/P1.xpm"

/******************************************************************************/
/*                               ENUMS                                        */
/******************************************************************************/

typedef enum e_tile
{
	WALL		= '1',
	FLOOR		= '0',
	EXIT		= 'E',
	COLLECTIBLE	= 'C',
	PLAYER		= 'P',
	VISITED		= 'V'
}				t_tile;

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
}				t_key;

typedef enum e_img_index
{
	RUN_LEFT		= 0,
	RUN_RIGHT		= 1,
}					t_img_index;

/******************************************************************************/
/*                               STRUCTS                                      */
/******************************************************************************/
typedef struct s_player_pos
{
	int	y;
	int	x;
}	t_player_pos;

typedef struct s_player
{
	t_player_pos	current_pos;
	t_player_pos	next_pos;
	char			current_tile;
	int				img_index;
}					t_player;

typedef struct s_map
{
	char			**grid;
	size_t			rows;
	size_t			cols;
}					t_map;

typedef struct s_img
{
	void			*img;
}					t_img;

typedef struct s_game
{
	char			*map_file;
	void			*mlx;
	void			*window;
	t_map			map;
	t_player		player;
	int				moves_counter;
	int				collectible_count;
	int				exit_count;
	int				player_count;
	t_img			coltbl_img;
	t_img			exit_img;
	t_img			wall_img;
	t_img			floor_img;
	t_img			player_img[2];
	int				x;
	int				y;
}					t_game;

/******************************************************************************/
/*                               INIT_GAME                                    */
/******************************************************************************/
void	init_game(t_game *game);
void	render_map(t_game *game, int i, int j);
void	load_textures(t_game *g);

/******************************************************************************/
/*                               PARSER                                       */
/******************************************************************************/
void	check_args(int ac, char **argv);
void	check_filename(char *filename);
void	check_map_size(t_game *game);
void	check_valid_chars(t_game *game);
void	check_valid_path(t_game *game, t_player_pos current_pos);
void	check_walls(t_game	*game);
void	create_map_grid(t_game *game);
void	parser(int ac, char **argv, t_game *game);
void	validate_map(t_game *game);

/******************************************************************************/
/*                               RUN_GAME                                     */
/******************************************************************************/
void	check_move(t_game *game, int x, int y);	
int		key_press(int key, t_game *game);
void	print_moves(t_game *s_game);
void	put_player_tile(t_game *game);
void	run_game(t_game *game);
void	put_tile(t_game *game, char tile, t_player_pos point, int img_index);
void	render_move(t_game *game, char current, char next, t_player *player);

/******************************************************************************/
/*                               UTILS                                        */
/******************************************************************************/

void	exit_error(char *error_message, t_game *game);
char	*file_to_inline(char *filename);
void	ft_free_array(char **array);
void	free_game(t_game *game);
void	exit_game(char *message, t_game *game);
int		exit_esc(t_game *game);

#endif
