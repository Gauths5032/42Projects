/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:52:56 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/11 13:06:21 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	write(1, str, i);
}

int		main(void)
{
	ft_putstr("\nwtmp begins Fri Dec 11 13:15 \n");
	return (0);
}
