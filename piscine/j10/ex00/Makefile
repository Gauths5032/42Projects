# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/28 02:39:48 by glangloi          #+#    #+#              #
#    Updated: 2015/10/28 02:40:10 by glangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER_DIR = includes

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC) -I$(HEADER_DIR)
			ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
				ranlib $(NAME)

clean:
		/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
