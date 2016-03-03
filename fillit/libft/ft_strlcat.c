/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 02:55:12 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/22 17:16:21 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t size1)
{
	char		*strdest;
	const char	*src;
	size_t		n;
	size_t		len;

	strdest = dest;
	src = source;
	n = size1;
	while (n-- != 0 && *strdest != '\0')
		strdest++;
	len = strdest - dest;
	n = size1 - len;
	if (n == 0)
		return (len + ft_strlen(src));
	while (*src != '\0')
	{
		if (n != 1)
		{
			*strdest++ = *src;
			n--;
		}
		src++;
	}
	*strdest = '\0';
	return (len + (src - source));
}
