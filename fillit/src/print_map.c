/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 20:03:11 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/27 19:28:59 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

char	**ft_tabnew(int size)
{
	char	**tab;
	int		i;

	if (!(tab = (char **)ft_memalloc(sizeof(*tab) * size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (!(tab[i] = ft_strnew(size)))
			return (NULL);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_dot_filler(char **tab, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			tab[i][j] = '.';
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_free_tab(char **tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putendl(tab[i]);
		ft_strdel(&tab[i]);
		i++;
	}
	ft_memdel((void **)tab);
}

void	ft_print_map(t_tetr *ptr, int size)
{
	int		i;
	int		j;
	char	**tab;

	tab = ft_tabnew(size);
	ft_dot_filler(tab, size);
	while (ptr != NULL)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (ptr->tetr[i][j] == '#')
				{
					tab[ptr->x + i][ptr->y + j] = ptr->nbr;
				}
				j++;
			}
			i++;
		}
		ptr = ptr->next;
	}
	ft_free_tab(tab, size);
}
