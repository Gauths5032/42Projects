/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:58:36 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/02 23:16:30 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		sign;
	int		nlen;

	sign = n < 0 ? 1 : 0;
	nlen = intlen(n);
	if (!(s = (char*)malloc(sizeof(char) * nlen + sign + 1)))
		return (NULL);
	s = s + nlen + sign;
	*s = '\0';
	if (!n)
		*--s = '0';
	while (n != 0)
	{
		*--s = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		*--s = '-';
	return (s);
}
