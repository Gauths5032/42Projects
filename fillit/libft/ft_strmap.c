/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 23:12:01 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/24 03:21:41 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_s;

	if (!s || !f || !(new_s = ft_strdup(s)))
		return (NULL);
	i = -1;
	while (new_s && new_s[++i])
		new_s[i] = f(new_s[i]);
	new_s[i] = '\0';
	return (new_s);
}
