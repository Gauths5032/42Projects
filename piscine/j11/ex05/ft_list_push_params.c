/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 18:36:12 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/29 03:14:43 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*suite;

	suite = *begin_list;
	*begin_list = ft_create_elem(data);
	(*begin_list)->next = suite;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*r;
	int		i;

	i = -1;
	r = 0;
	while (++i < ac)
		ft_list_push_front(&r, av[i]);
	return (r);
}
