/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verifstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprunier <lprunier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 21:06:09 by lprunier          #+#    #+#             */
/*   Updated: 2015/12/17 17:59:54 by lprunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

char	*ft_verifstr(char *str, char **argv)
{
	char	*strbis;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (open(argv[1], O_RDONLY) != -1)
	{
		strbis = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
		while (str[i] != '\n')
			i++;
		i++;
		while (str[i] != '\0' && i < ft_strlen(str))
		{
			strbis[j] = str[i];
			j++;
			i++;
		}
		str[j] = '\0';
		return (strbis);
	}
	return (str);
}
