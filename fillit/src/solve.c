/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 20:28:53 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/14 19:08:06 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int		ft_check_pos3(int x, int y, t_tetr *current)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (current->tetr[i][j] == '#')
			{
				if ((current->x + i == x)
						&& (current->y + j == y))
				{
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_pos(t_tetr *tetr, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetr->tetr[i][j] == '#')
				if ((i + tetr->x) >= size || (j + tetr->y) >= size
						|| (i + tetr->x) < 0 || (j + tetr->y) < 0)
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_pos2(t_tetr *start, t_tetr *tetr)
{
	int		i;
	int		j;
	t_tetr	*current;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetr->tetr[i][j] == '#')
			{
				current = start;
				while (current->nbr != tetr->nbr)
				{
					if (!(ft_check_pos3(tetr->x + i, tetr->y + j, current)))
						return (0);
					current = current->next;
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_backtrack(t_tetr *start, t_tetr *tetr, int size)
{
	int		i;
	int		j;

	i = -3;
	while (i < size)
	{
		j = -3;
		while (j < size)
		{
			tetr->x = i;
			tetr->y = j;
			if (ft_check_pos(tetr, size) == 1
					&& ft_check_pos2(start, tetr) == 1)
			{
				if ((tetr->next) == NULL)
					return (1);
				if ((ft_backtrack(start, tetr->next, size)) == 1)
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_solve(int nb, t_tetr *start)
{
	int		valid;

	valid = 0;
	while (!valid)
	{
		valid = ft_backtrack(start, start, nb);
		nb++;
	}
	if (valid == 0)
	{
		ft_error();
		return (0);
	}
	ft_print_map(start, --nb);
	return (1);
}
