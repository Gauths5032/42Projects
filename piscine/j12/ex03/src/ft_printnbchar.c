/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:03:30 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/10 14:48:53 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = -1;
	while (s1[++i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_printnbchar(int nb, int c)
{
	if (nb == 0 && c == 0)
		ft_putstr("00000000");
	else if (nb == 0 && c != 0)
		ft_putstr("0000000");
	else
	{
		if (nb >= 16777216)
			ft_putstr("");
		else if (nb >= 1048576)
			ft_putstr("0");
		else if (nb >= 65536)
			ft_putstr("00");
		else if (nb >= 4096)
			ft_putstr("000");
		else if (nb >= 256)
			ft_putstr("0000");
		else if (nb < 256)
			ft_putstr("00000");
		if (c == 0)
			ft_putchar('0');
	}
	if (nb != 0)
		ft_printhexa(nb);
}
