/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_col.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@studentt.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:07:42 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 15:00:12 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

t_elements		ft_get_col(t_elements e, char *str)
{
	t_elements		elem;
	int				a;

	a = 0;
	elem.vide = e.vide;
	elem.full = e.full;
	elem.obst = e.obst;
	elem.lignes = e.lignes;
	while (str[a] != '\n')
		a++;
	a++;
	elem.col = a;
	elem.str = str;
	return (elem);
}
