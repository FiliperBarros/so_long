# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/12 13:37:46 by frocha-b          #+#    #+#              #
#    Updated: 2025/09/18 19:12:14 by frocha-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Program name
NAME = so_long

#External libraries directories
LIBS_DIR = ./libs
LIBFT_DIR = $(LIBS_DIR)/libft
MINILIBX_DIR = $(LIBS_DIR)/minilibx

LIBFT = $(LIBFT_DIR)/libft.a
MINILIBX = -L$(MINILIBX_DIR) -lmlx -lXext -lX11 -lm

#Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -g\
		$(SO_LONG_INC) \
		$(LIBFT_INC) \
		$(GET_NEXT_LINE_INC) \
		$(FT_PRINTF_INC)./

#Source and objects directories
SRC_DIR = ./src
OBJ_DIR = ./objects

#Source files
SRC_FILES = \
			check_filename.c \
			check_map_size.c \
			check_valid_chars.c \
			check_valid_path.c \
			check_walls.c \
			create_map_grid.c \
			parser.c \
			validate_map.c \
			check_args.c \
			exit_error.c \
			file_to_inline.c \
			ft_free_array.c \
			main.c

#Converts the source files in object files
OBJS = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Tell make where to search for source files
VPATH = $(SRC_DIR) $(SRC_DIR)/utils $(SRC_DIR)/parser

#Include paths
SO_LONG_INC = -Iincludes
LIBFT_INC = -Ilibft
GET_NEXT_LINE_INC = -Ilibft/get_next_line
FT_PRINTF_INC = -Ilibft/ft_printf
MLX_INC			=-I$(MINILIBX_DIR)
# **************************************************************************** #
#                                MAKE RULES                                    #
# **************************************************************************** #

all : $(LIBFT) $(MINILIBX_DIR)/libmlx.a $(NAME)

$(LIBFT):
	@make -C$(LIBFT_DIR)
	
$(MINILIBX)/libmlx.a:
	@make -C$(MINILIBX_DIR) -f Makefile.mk

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf  $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re : fclean all

.PHONY: all clean fclean re 