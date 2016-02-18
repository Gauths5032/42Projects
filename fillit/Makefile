# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glangloi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/11 16:30:59 by glangloi          #+#    #+#              #
#    Updated: 2016/02/14 19:23:38 by glangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LNAME = libft.a

SRC = src/main.c\
	  src/checks.c\
	  src/list.c\
	  src/read_file.c\
	  src/tools.c\
	  src/solve.c\
	  src/print_map.c\

LFLAGS = -Llibft -lft

OBJ = $(SRCS:.c=.o)

INC = inc/fillit.h\

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@cd libft && make
	@gcc -o $(NAME) $(LFLAGS) $(FLAGS) $(SRC)

clean:
	@rm -f $(OBJ)
	@cd libft && make clean

fclean: clean
	@rm -f $(NAME)
	@rm -f libft/$(LNAME)

re: fclean all
