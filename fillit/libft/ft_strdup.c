/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 22:55:30 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/21 22:56:20 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char*s2;

	if (s)
	{
		s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (s2)
		{
			ft_strcpy(s2, s);
			return (s2);
		}
	}
	return (NULL);
}
