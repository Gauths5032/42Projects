/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 06:07:12 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/28 06:28:21 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*node_i;
	t_list	*node_j;
	void	*temp_data;

	node_i = *begin_list;
	while (node_i)
	{
		node_j = node_i->next;
		while (node_j)
		{
			if ((*cmp)(node_i->data, node_j->data) > 0)
			{
				temp_data = node_i->data;
				node_i->data = node_j->data;
				node_j->data = temp_data;
			}
			node_j = node_j->next;
		}
		node_i = node_i->next;
	}
}
