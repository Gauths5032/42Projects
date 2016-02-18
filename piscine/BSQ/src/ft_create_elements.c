/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elements.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:05:31 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 14:56:30 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

t_elements		*ft_create_elem(char v, char f, char o, int l)
{
	t_elements	*elem;

	elem = NULL;
	elem = malloc(sizeof(elem));
	if (elem)
	{
		elem->vide = v;
		elem->full = f;
		elem->obst = o;
		elem->lignes = l;
		elem->col = 0;
	}
	return (elem);
}
