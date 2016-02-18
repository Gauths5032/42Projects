/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 17:15:12 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/22 17:27:54 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t1;
	unsigned int		i;

	i = 0;
	t1 = (unsigned char *)s;
	while (i < n)
	{
		if (t1[i] == (unsigned char)c)
			return ((void *)&t1[i]);
		else
			i++;
	}
	return (NULL);
}
