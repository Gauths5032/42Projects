/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:07:09 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 15:01:59 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

int		ft_atoi(char *str, int a)
{
	int i;
	int nb;

	i = 1;
	nb = str[0] - '0';
	while (i < a - 3)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}
