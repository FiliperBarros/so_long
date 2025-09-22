# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/12 13:37:46 by frocha-b          #+#    #+#              #
#    Updated: 2025/09/22 11:45:26 by frocha-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Program name
NAME = so_long

#Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -g\
		$(SO_LONG_INC) \
		$(LIBFT_INC) \
		$(MLX_INC)

#Source and objects directories
SRC_DIR = src
OBJ_DIR = objects

#External libraries 
LIBS_DIR 			= ./libs
LIBFT_DIR 			= $(LIBS_DIR)/libft
MLX_DIR		 		= $(LIBS_DIR)/minilibx

FT_PRINTF_LIB		= $(FT_PRINTF_DIR)/ft_printf.a
GET_NEXT_LINE_LIB	= $(GET_NEXT_LINE_DIR)/get_next_line.a
LIBFT_LIB			= $(LIBFT_DIR)/libft.a
MLX_LIB 			= -L$(MLX_DIR) -lmlx -lXext -lX11 -lm

#Include paths
SO_LONG_INC 		= -Iincludes
LIBFT_INC 			= -I$(LIBFT_DIR)
MLX_INC				= -I$(MLX_DIR)

#Source files
SRC_FILES = \
			init_game.c \
			load_textures.c \
			render_map.c \
			check_filename.c \
			check_map_size.c \
			check_valid_chars.c \
			check_valid_path.c \
			check_walls.c \
			create_map_grid.c \
			parser.c \
			validate_map.c \
			key_press.c \
			print_moves.c \
			run_game.c \
			check_args.c \
			exit_error.c \
			file_to_inline.c \
			ft_free_array.c \
			main.c

#Converts the source files in object files
OBJS = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Tell make where to search for source files
VPATH = $(SRC_DIR) $(SRC_DIR)/utils $(SRC_DIR)/parser $(SRC_DIR)/init_game $(SRC_DIR)/run_game

# **************************************************************************** #
#                                MAKE RULES                                    #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)  $(LIBFT_LIB) $(MLX_DIR)/libmlx.a
	$(CC) $(CFLAGS) $(OBJS) \
		$(MLX_LIB) \
		$(LIBFT_LIB) \
		-o $(NAME)
		
$(LIBFT_LIB):
	@make -C$(LIBFT_DIR)

$(MLX_DIR)/libmlx.a:
	@make -C$(MLX_DIR) -f Makefile.mk

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf  $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean
	rm -f $(MLX_DIR)/*.o $(MLX_DIR)/*.a

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	
re : fclean all

.PHONY: all clean fclean re 