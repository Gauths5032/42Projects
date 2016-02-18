/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 02:54:33 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/31 14:21:12 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		ft_atoi(char *str)
{
	int		num;
	int		sign;
	int		k;

	num = 0;
	sign = 1;
	k = 0;
	while (str[k] == ' ' || str[k] == '\t' || str[k] == '\n' ||
			str[k] == '\v' || str[k] == '\f' || str[k] == '\r')
		k++;
	if (str[k] == '-')
	{
		sign = -1;
		k++;
	}
	else if (str[k] == '+')
		k++;
	while (str[k] >= '0' && str[k] <= '9')
	{
		num = num * 10 + str[k] - 48;
		k++;
	}
	return (num * sign);
}
