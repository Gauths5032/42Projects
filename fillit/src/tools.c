/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 16:55:24 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/14 19:08:02 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < 46342)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

void	ft_error(void)
{
	ft_putstr("error\n");
}

void	ft_usage(void)
{
	ft_putstr("usage: fillit source_file\n");
}
