/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:02:41 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 15:00:50 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

t_square		*ft_create_sq(void)
{
	t_square	*sq;

	sq = NULL;
	sq = malloc(sizeof(*sq));
	if (sq)
	{
		sq->location = 0;
		sq->size = 0;
	}
	return (sq);
}
