/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:06:15 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 14:57:17 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

int		ft_check_square(int a, int c, t_elements elem, int s)
{
	int t;

	t = c;
	while (c > 0)
	{
		s = t;
		while (s > 0)
		{
			if (elem.str[a] != elem.vide)
				return (0);
			a++;
			s--;
		}
		a += elem.col - t;
		c--;
	}
	return (t);
}
