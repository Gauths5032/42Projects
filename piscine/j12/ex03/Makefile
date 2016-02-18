# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glangloi </var/mail/glangloi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/08 14:56:16 by glangloi          #+#    #+#              #
#    Updated: 2015/12/08 14:59:15 by glangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

SRC = src/main.c\
	  	  	src/ft_printnbchar.c\
				  	src/ft_printhexa.c\
						  	src/ft_print.c

OBJ = main.o\
	  		ft_printnbchar.o\
					ft_printhexa.o\
							ft_print.o

INC = inc/

FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(SRC) -I $(INC)
			gcc $(OBJ) -o $(NAME)

clean:
		/bin/rm -f main.o ft_print.o ft_printnbchar.o ft_printhexa.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
