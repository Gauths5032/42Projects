/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 18:40:04 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/29 03:07:43 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*cpy;
	t_list	*temp;

	if (*begin_list != NULL)
	{
		cpy = *begin_list;
		while (cpy)
		{
			temp = cpy->next;
			free(cpy);
			cpy = temp;
		}
		*begin_list = NULL;
	}
}
