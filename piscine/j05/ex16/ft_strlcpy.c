/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 11:38:59 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/18 14:15:21 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	len_src;
	char			*d;
	char			*s;

	len_src = ft_strlen(src);
	i = size;
	d = dest;
	s = src;
	if (i == 0)
		return (len_src);
	while (*s != '\0')
	{
		if (i != 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = '\0';
	return (s - src);
}
