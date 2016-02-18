/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 03:54:01 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/30 04:25:23 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree		*node;

	if (!(node = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	node->item = item;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
