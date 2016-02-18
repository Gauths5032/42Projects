/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 12:49:13 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/16 14:50:33 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int index;
	int changes;
	int temp;

	index = 1;
	changes = 1;
	temp = 0;
	while (changes > 0)
	{
		index = 1;
		changes = 0;
		while (index < size)
		{
			if (tab[index] < tab[index - 1])
			{
				temp = tab[index - 1];
				tab[index - 1] = tab[index];
				tab[index] = temp;
				changes++;
			}
			index++;
		}
	}
}
