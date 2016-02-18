# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 20:19:13 by glangloi          #+#    #+#              #
#    Updated: 2015/11/02 20:19:18 by glangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
			gcc -o $(NAME) ft_tail.o

clean:
		/bin/rm -f ft_tail.o

fclean:
		/bin/rm -f $(NAME)

re:
		fclean all
