/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 06:09:45 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/28 06:11:44 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_length(t_list *list)
{
	int		len;

	len = 0;
	while (list)
	{
		len++;
		list = list->next;
	}
	return (len);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*node;
	void	*temp_data;
	int		i;
	int		j;

	i = ft_list_length(begin_list);
	while (i > 1)
	{
		node = begin_list;
		j = 1;
		while (j < i)
		{
			temp_data = node->data;
			node->data = node->next->data;
			node->next->data = temp_data;
			node = node->next;
			j++;
		}
		i--;
	}
}
