# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/12 13:37:46 by frocha-b          #+#    #+#              #
#    Updated: 2025/09/15 20:09:07 by frocha-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Program name
NAME = so_long

#Libft path
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

#Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -g -fPIE\
		$(SO_LONG_INC) \
		$(LIBFT_INC) \
		$(GET_NEXT_LINE_INC) \
		$(FT_PRINTF_INC)./

#Source and objects Directories
SRC_DIR = ./src
OBJ_DIR = ./objects

#Source files
SRC_FILES = \
			main.c \
			check_filename.c \
			validate_map.c \
			exit_error.c

#Converts the source files in object files
OBJS = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Tell make where to search for source files
VPATH = $(SRC_DIR) $(SRC_DIR)/utils $(SRC_DIR)/parser

#Include paths
SO_LONG_INC = -Iincludes
LIBFT_INC = -Ilibft
GET_NEXT_LINE_INC = -Ilibft/get_next_line
FT_PRINTF_INC = -Ilibft/ft_printf

# **************************************************************************** #
#                                MAKE RULES                                    #
# **************************************************************************** #

all : $(LIBFT) $(NAME)

$(LIBFT):
	@make -C$(LIBFT_DIR)

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