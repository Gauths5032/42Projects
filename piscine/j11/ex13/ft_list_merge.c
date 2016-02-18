/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 06:05:15 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/30 03:44:29 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*l;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	l = *begin_list1;
	while (l->next)
		l = l->next;
	l->next = begin_list2;
}
