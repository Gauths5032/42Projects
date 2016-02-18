/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:03:34 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 15:02:31 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

void	ft_create_map(t_square sq, char *str, t_elements el, int a)
{
	int s;
	int l;

	s = 0;
	l = 0;
	while (str[a] != '\0')
	{
		if (a == sq.location)
		{
			while (l < sq.size)
			{
				while (s < sq.size)
				{
					str[a++] = el.full;
					s++;
				}
				s = 0;
				a += el.col - sq.size;
				l++;
			}
		}
		a++;
	}
	ft_print_map(str);
}
