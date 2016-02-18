# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/10 14:50:53 by glangloi          #+#    #+#              #
#    Updated: 2015/12/10 14:51:29 by glangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_last

SRC = last.c

OBJ = last.o

INC = ft.h

FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(INC)
	gcc $(OBJ) -o $(NAME)

clean:
	/bin/rm -f last.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
