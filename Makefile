# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 19:43:00 by joseoliv          #+#    #+#              #
#    Updated: 2024/07/25 07:56:42 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = server
NAME2 = client
NAME3 = test
NAME = $(NAME1) $(NAME2) $(NAME3)

SRCS_CLIENT = ./src/client.c
SRCS_SERVER = ./src/server.c
SRCS_TEST = ./src/test.c

OBJ_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJ_SERVER = $(SRCS_SERVER:.c=.o)
OBJ_TEST = $(SRCS_TEST:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FT_PRINTF = ./include/ft_printf/libftprintf.a
LIBFT = ./include/libft/libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME1): $(OBJ_SERVER) $(FT_PRINTF) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_SERVER) -o $(NAME1) $(FT_PRINTF) $(LIBFT)

$(NAME2): $(OBJ_CLIENT) $(FT_PRINTF) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_CLIENT) -o $(NAME2) $(FT_PRINTF) $(LIBFT)
	
$(NAME3): $(OBJ_TEST) $(FT_PRINTF) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_TEST) -o $(NAME3) $(FT_PRINTF) $(LIBFT)

$(FT_PRINTF):
	@make -C ./include/ft_printf -s

$(LIBFT):
	@make -C ./include/libft -s

clean:
	@$(RM) $(OBJ_CLIENT) $(OBJ_SERVER)
	@make -C ./include/ft_printf clean -s
	@make -C ./include/libft clean -s

fclean: clean
	@$(RM) $(NAME1) $(NAME2)
	@make -C ./include/ft_printf fclean -s
	@make -C ./include/libft fclean -s

re: fclean all
