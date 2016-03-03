/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 16:46:17 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/13 20:11:38 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"

# define BUF_SIZE 546

typedef struct		s_tetr
{
	int				x;
	int				y;
	char			nbr;
	char			**tetr;
	struct s_tetr	*next;
}					t_tetr;

int					ft_sqrt(int nb);
int					ft_new_list(char *buf, t_tetr **start);
int					ft_check_next(char **tetr);
int					ft_check_size_tetr(char **tetr);
int					ft_check_symbols(char *buf, int size);
int					ft_check_size(char *buf, int size);
int					ft_get_tetr(char *source, t_tetr **start);
int					ft_solve(int nb, t_tetr *start);
void				ft_print_map(t_tetr *ptr, int size);
void				ft_free_list(t_tetr *start);
void				ft_error(void);
void				ft_usage(void);

#endif
