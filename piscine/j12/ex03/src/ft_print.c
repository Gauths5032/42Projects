/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:02:24 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/10 14:45:41 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

int		ft_check(char previous[16], char next[16])
{
	int		i;

	i = 0;
	while (previous[i] == next[i])
		i++;
	if (i == 16)
		return (1);
	return (0);
}

void	ft_putcharspe(char c)
{
	if (c == '	')
		ft_putchar('.');
	else if (c == '\n')
		ft_putchar('.');
	else if (c == '\0')
		return ;
	else
		ft_putchar(c);
}

int		ft_printbis(int i, int c, char next[16])
{
	if (c == 0)
		ft_putstr("  ");
	else
		ft_putchar(' ');
	while (++i < 16)
	{
		ft_printhexa(next[i]);
		if (i != 15 || c == 0)
			ft_putchar(' ');
		if ((i == 7 || i == 15) && c == 0)
			ft_putchar(' ');
	}
	return (i);
}

int		ft_print(t_tab pn, int nbchar, int star, int c)
{
	int		i;

	i = -1;
	if (ft_check(pn.previous, pn.next) == 1)
	{
		if (star != 1)
			ft_putstr("*\n");
		return (1);
	}
	star = 0;
	ft_printnbchar(nbchar, c);
	i = ft_printbis(i, c, pn.next);
	if (c == 0)
	{
		i = -1;
		ft_putchar('|');
		while (++i < 16)
			ft_putcharspe(pn.next[i]);
		ft_putchar('|');
	}
	ft_putchar('\n');
	return (0);
}
