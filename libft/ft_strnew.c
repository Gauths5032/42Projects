/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 23:25:54 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/18 10:15:34 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size == 0)
		return (NULL);
	if ((str = malloc(size + 1)) == NULL)
		return (NULL);
	while (size)
		str[size--] = '\0';
	*str = '\0';
	return (str);
}
