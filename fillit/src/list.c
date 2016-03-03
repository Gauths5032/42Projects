/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 17:47:50 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/14 19:27:40 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

void	ft_free_list(t_tetr *start)
{
	int		i;
	t_tetr	*ptr;

	while (start != NULL)
	{
		ptr = start;
		i = 0;
		while (i < 4)
		{
			ft_memdel((void **)(&(start->tetr[i])));
			i++;
		}
		ft_memdel((void **)(start->tetr));
		start = start->next;
		ft_memdel((void **)(&ptr));
	}
}

t_tetr	*ft_fill_node(char *buf, t_tetr *new)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	while (buf[k] == '\n')
		buf++;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			new->tetr[i][j] = buf[k];
			j++;
			k++;
		}
		k++;
		i++;
	}
	return (new);
}

t_tetr	*ft_new_node(char *buf)
{
	t_tetr	*new;
	int		i;

	if (!(new = (t_tetr *)ft_memalloc(sizeof(t_tetr))))
		return (NULL);
	if (!(new->tetr = (char **)ft_memalloc(sizeof(char *) * 4)))
		return (NULL);
	i = 0;
	while (i < 4)
	{
		if (!(new->tetr[i] = ft_strnew(4)))
			return (NULL);
		i++;
	}
	new->x = -3;
	new->y = -3;
	return (ft_fill_node(buf, new));
}

int		ft_nb_tetri(char *buf)
{
	int		nb_tetr;
	int		i;
	int		b;

	b = 0;
	i = 0;
	nb_tetr = 0;
	while (buf[i])
	{
		if (buf[i] == '#')
			nb_tetr++;
		if (buf[i] == '.')
			b++;
		i++;
	}
	if ((nb_tetr % 4) != 0)
		return (0);
	if ((nb_tetr != 0) && (b / nb_tetr) != 3)
		return (0);
	return (nb_tetr / 4);
}

int		ft_new_list(char *buf, t_tetr **start)
{
	int		nb;
	int		current;
	int		i;
	t_tetr	*tmp;

	if ((nb = ft_nb_tetri(buf)) == 0)
		return (0);
	tmp = ft_new_node(buf);
	*start = tmp;
	tmp->nbr = 'A';
	i = 1;
	current = 21;
	if (*buf == '\n')
		buf++;
	while (i < nb)
	{
		if (!(tmp->next = ft_new_node(buf + current)))
			return (0);
		tmp = tmp->next;
		tmp->nbr = 'A' + i;
		i++;
		current = current + 21;
	}
	tmp->next = NULL;
	return (nb);
}
