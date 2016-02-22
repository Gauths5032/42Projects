/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 10:32:19 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/22 10:33:00 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*l_tmp;
	t_list	*l_result;

	if (!lst || !f)
		return (NULL);
	l_result = f(lst);
	l_tmp = l_result;
	lst = lst->next;
	while (lst)
	{
		l_tmp->next = f(lst);
		l_tmp = l_tmp->next;
		lst = lst->next;
	}
	return (l_result);
}
