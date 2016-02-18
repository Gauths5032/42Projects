/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:50:35 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/19 16:55:34 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	char	*t1;
	char	*t2;
	size_t	i;

	t1 = dst;
	t2 = src;
	i = n;
	while (i-- > 0)
	{
		if ((*t1++ = *t2++) == c)
			return (t1);
	}
	return (NULL);
}
