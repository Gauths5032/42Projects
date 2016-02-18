/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 02:44:06 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/28 03:23:27 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		is_sort;

	is_sort = 1;
	i = 0;
	while (i < length - 1 && is_sort == 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			is_sort = 0;
		i++;
	}
	if (is_sort == 1)
		return (1);
	is_sort = 1;
	i = 0;
	while (i < length - 1 && is_sort == 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			is_sort = 0;
		i++;
	}
	return (is_sort);
}
