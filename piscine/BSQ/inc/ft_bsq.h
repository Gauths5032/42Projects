/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 21:58:38 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 14:54:32 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE	1
# define BUF_SIZE2	2000*2000

typedef struct		s_elements
{
	char			vide;
	char			full;
	char			obst;
	int				lignes;
	int				col;
	char			*str;
}					t_elements;

typedef struct		s_square
{
	int				location;
	int				size;
}					t_square;

int					ft_check_char(t_elements e, char c);
int					ft_validate_map(t_elements e, char *str, int a, int b);
char				*ft_get_str();
char				*ft_get_elements();
t_square			*ft_create_sq();
void				ft_create_map(t_square sq, char *str, t_elements el, int a);
void				ft_print_map(char *str);
t_elements			*ft_create_elem(char v, char f, char o, int l);
int					ft_check_square(int a, int c, t_elements elem, int s);
t_square			ft_check(t_elements elem);
int					ft_atoi(char *str, int a);
t_elements			ft_get_col(t_elements e, char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
char				*ft_verifstr(char *str, char **argv);
int					ft_strlen(char *str);

#endif
