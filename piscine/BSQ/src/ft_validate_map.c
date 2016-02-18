/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 21:59:59 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 15:31:36 by lprunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

int		ft_check_char(t_elements e, char c)
{
	if (c != '\n'
			&& c != '\0'
			&& c != e.vide
			&& c != e.obst)
		return (0);
	else
		return (1);
}

int		ft_validate_map(t_elements e, char *str, int a, int b)
{
	int c;
	int d;

	d = 0;
	while (str[a] != '\n')
		a++;
	a++;
	c = a;
	if (a < 1)
		return (0);
	while (str[++b] != '\0')
	{
		if (ft_check_char(e, str[b]) == 0)
			return (0);
		if (str[b] == '\n')
		{
			d++;
			b++;
			if (b != c || (str[b] == '\0' && d != e.lignes))
				return (0);
			else
				c += a;
		}
	}
	return (1);
}
