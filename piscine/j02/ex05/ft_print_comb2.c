/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 17:20:40 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/15 19:38:41 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_num(int num)
{
	ft_putchar('0' + (num / 10));
	ft_putchar('0' + (num % 10));
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 < 100)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_print_num(num1);
			ft_putchar(' ');
			ft_print_num(num2);
			if (num1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}
}
