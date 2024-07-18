# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 19:43:00 by joseoliv          #+#    #+#              #
#    Updated: 2024/07/10 16:52:41 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
SRCS_CLIENT = client.c
SRCS_SERVER = server.c

OBJS = $(SRCS:.c=.o)
CC=cc
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)