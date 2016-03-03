/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 02:40:39 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/21 23:33:50 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *tmp1;
	const char *tmp2;

	if (*s2 == 0)
		return ((char *)s1);
	while (*s1 != 0)
	{
		tmp1 = s1;
		tmp2 = s2;
		while (*tmp1 == *tmp2 && *tmp1 != 0 && *tmp2 != 0)
		{
			tmp1++;
			tmp2++;
		}
		if (*tmp2 == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
