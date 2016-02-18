/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 06:03:14 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/28 06:24:50 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	remove_link(t_list **begin_list, t_list **node, t_list **prev)
{
	if (*prev == NULL)
	{
		*begin_list = (*begin_list)->next;
		free(*node);
		*node = *begin_list;
	}
	else
	{
		(*prev)->next = (*node)->next;
		free(*node);
		*node = (*prev)->next;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*node;
	t_list	*prev;

	prev = NULL;
	node = *begin_list;
	while (node != NULL)
	{
		if ((*cmp)(data_ref, node->data) == 0)
		{
			remove_link(begin_list, &node, &prev);
		}
		else
		{
			prev = node;
			node = node->next;
		}
	}
}
