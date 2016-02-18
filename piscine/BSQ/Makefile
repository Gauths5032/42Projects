# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lprunier <lprunier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/15 22:15:21 by lprunier          #+#    #+#              #
#    Updated: 2015/12/17 15:17:14 by lprunier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = src/ft_atoi.c\
	  src/ft_check.c\
	  src/ft_check_square.c\
	  src/ft_create_elements.c\
	  src/ft_create_map.c\
	  src/ft_get_col.c\
	  src/ft_get_elements.c\
	  src/ft_get_str.c\
	  src/ft_print_map.c\
	  src/ft_validate_map.c\
	  src/ft_verifstr.c\
	  src/ft_create_square.c\
	  src/main.c

OBJ = ft_atoi.o\
	  ft_check.o\
	  ft_check_square.o\
	  ft_create_elements.o\
	  ft_create_map.o\
	  ft_get_col.o\
	  ft_get_elements.o\
	  ft_get_str.o\
	  ft_print_map.o\
	  ft_validate_map.o\
	  ft_verifstr.o\
	  ft_create_square.o\
	  main.o

INC = ft_bsq.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) -I $(INC)
	gcc -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ) ft_bsq.h.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
