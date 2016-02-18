/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 23:36:27 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/18 10:21:55 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*o;
	char	*p;
	size_t	i;
	size_t	len;

	i = 0;
	while (ft_isspace(s[i]) && s[i])
		i++;
	if (s[i] == '\0')
		return (ft_strdup("\0"));
	len = ft_strlen((char *)s) - 1;
	while (ft_isspace(s[len]))
		len--;
	if ((o = malloc(len + 2 - i)) == NULL)
		return (NULL);
	len = len + 1 - i;
	p = o;
	while (len--)
		*(o++) = s[i++];
	*o = '\0';
	return (p);
}
