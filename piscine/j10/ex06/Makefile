# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/28 02:46:43 by glangloi          #+#    #+#              #
#    Updated: 2015/10/31 14:23:41 by glangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = do-op

SRC = src/do_op.c src/ft.c src/ops.c
OBJ = do_op.o ft.o ops.o

HEADER = inc/do_op.h

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC) $(HEADER)
			$(CC) $(OBJ) -o $(NAME)

clean:
		/bin/rm -f do_op.o ft.o ops.o inc/do_op.h.gch

fclean: clean
		/bin/rm -f $(NAME)

re: fclean 
		all
