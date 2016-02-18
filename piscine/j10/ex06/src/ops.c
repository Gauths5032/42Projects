/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 23:51:30 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/31 14:46:33 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/do_op.h"

void	ft_sum(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_subtract(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_multiply(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_divide(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(a / b);
}

void	ft_modulo(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(a % b);
}
