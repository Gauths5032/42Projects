/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 22:55:30 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/18 10:37:03 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	if ((s2 = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1)))) == NULL)
		return (NULL);
	i = 0;
	while ((*(s2 + i) = *(s1 + i)) != '\0')
		i++;
	return (s2);
}
