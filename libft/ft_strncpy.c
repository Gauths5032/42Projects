/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 02:39:22 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/18 10:38:17 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0 && *(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		n--;
		i++;
	}
	while (n > 0)
	{
		*(dst + i) = '\0';
		i++;
		n--;
	}
	return (dst);
}
