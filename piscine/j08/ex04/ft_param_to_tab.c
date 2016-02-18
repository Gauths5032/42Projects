/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_to_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 20:30:10 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/18 14:25:06 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strcpy(char *dest, char *src)
{
	char	*result;

	result = dest;
	if ((dest != 0) && (src != 0))
	{
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (result);
}

char					*ft_strdup(char *str)
{
	char	*dest;

	dest = malloc(ft_strlen(str) + 1);
	if (str == 0)
		return (0);
	ft_strcpy(dest, str);
	return (dest);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*stock;
	int					i;

	i = 0;
	stock = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!stock)
		return (NULL);
	while (i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
