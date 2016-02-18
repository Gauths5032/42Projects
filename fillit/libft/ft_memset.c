/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:07:35 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/22 17:30:19 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*t;
	unsigned int	i;

	t = str;
	i = 0;
	while (i < n)
	{
		*t++ = c;
		i++;
	}
	return (str);
}
