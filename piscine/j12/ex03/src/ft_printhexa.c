/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:02:52 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/08 15:06:41 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_bis(int i, char *base, int modulo[100])
{
	while (i >= 0)
	{
		ft_putchar(base[modulo[i]]);
		i--;
	}
}

void	ft_printhexa(int nb)
{
	int		modulo[100];
	int		i;
	char	*base;
	int		n;

	i = 0;
	n = nb;
	base = "0123456789abcdef";
	if (nb != 0)
	{
		while (nb)
		{
			modulo[i] = nb % 16;
			nb = nb / 16;
			i++;
		}
		i--;
		if (n < 16)
			ft_putchar('0');
		ft_bis(i, base, modulo);
	}
	else
		ft_putstr("  ");
}
