/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:06:41 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 14:57:56 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

t_square		ft_check(t_elements elem)
{
	int				a;
	int				c;
	t_square		sq;

	a = 0;
	sq = *ft_create_sq();
	while (elem.str[a] != '\0')
	{
		c = 0;
		if (elem.str[a] == elem.vide)
		{
			while (c < elem.col)
			{
				if (ft_check_square(a, c, elem, c) > sq.size)
				{
					sq.size = c;
					sq.location = a;
				}
				c++;
			}
		}
		a++;
	}
	return (sq);
}
