/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 10:30:22 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/22 10:31:00 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *l_new)
{
	t_list	*l_start;

	if (alst)
	{
		l_start = *alst;
		*alst = l_new;
		l_new->next = l_start;
	}
	else
		*alst = l_new;
}
