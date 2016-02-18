/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 02:53:08 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/31 14:31:59 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/do_op.h"

void	initialize_ops(t_ops *ops)
{
	ops[0].op = '+';
	ops[0].f = &ft_sum;
	ops[1].op = '-';
	ops[1].f = &ft_subtract;
	ops[2].op = '*';
	ops[2].f = &ft_multiply;
	ops[3].op = '/';
	ops[3].f = &ft_divide;
	ops[4].op = '%';
	ops[4].f = &ft_modulo;
}

int		main(int ac, char **av)
{
	int		i;
	int		bul;
	t_ops	ops[5];

	if (ac == 4)
	{
		initialize_ops(ops);
		bul = 0;
		i = 0;
		while (i < 5)
		{
			if (av[2][0] == ops[i].op)
			{
				bul = 1;
				ops[i].f(ft_atoi(av[1]), ft_atoi(av[3]));
			}
			i++;
		}
		if (bul == 0)
			ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
