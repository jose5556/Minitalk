# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 19:43:00 by joseoliv          #+#    #+#              #
#    Updated: 2024/07/18 08:23:15 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
SRCS_CLIENT = ./src/client.c
SRCS_SERVER = ./src/server.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

CC=cc
FLAGS=-Wall -Wextra -Werror
RM = rm -f

FT_PRINTF = ./include/ft_printf/libftprintf.a
LIBFT = ./include/libft/libft.a

NAME = $(NAME1) $(NAME2)

NAME1 = server
NAME2 = client

all: $(NAME)

$(NAME): $(FT_PRINTF) $(LIBFT) $(OBJ_CLIENT) $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) -o $(NAME2) $(FT_PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_SERVER) -o $(NAME1) $(FT_PRINTF) $(LIBFT)

$(FT_PRINTF):
	@make -C ./include/ft_printf -s

$(LIBFT):
	@make -C ./include/libft -s

clean:
	$(RM) $(OBJ_CLIENT) $(OBJ_SERVER)
	@make -C ./include/ft_printf/ clean -s
	@make -C ./include/libft/ clean -s

fclean: clean
	$(RM) $(NAME1) $(NAME2)
	@make -C ./include/ft_printf/ fclean -s
	@make -C ./include/libft/ fclean -s

re: fclean all