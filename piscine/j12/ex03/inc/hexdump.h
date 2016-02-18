/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:00:18 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/11 13:05:20 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEXDUMP_H
# define HEXDUMP_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_tab
{
	char		previous[16];
	char		next[16];
}				t_tab;

typedef struct	s_ints
{
	int			fd;
	int			i;
	int			c16;
	int			ctt;
	int			star;
}				t_ints;

int				ft_strcmp(char *s1, char *s2);
void			ft_printhexa(int nb);
void			ft_printnbchar(int nb, int c);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_print(t_tab pn, int nbchar, int star, int c);
int				ft_printbis(int i, int c, char next[16]);
int				ft_check(char previous[16], char next[16]);
void			ft_putcharspe(char c);
t_tab			ft_init(t_tab pn);
int				ft_mainbis(t_ints a, t_tab pn, char *av);
t_tab			ft_change(t_tab pn);
void			ft_bis(int i, char *base, int modulo[100]);
int				ft_error(int ac, char **av, int i);

#endif
