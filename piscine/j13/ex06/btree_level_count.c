/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 04:05:46 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/30 04:06:14 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		max(int x, int y)
{
	return ((x > y) ? x : y);
}

int		blc(t_btree *root)
{
	if (root == NULL)
		return (0);
	else
		return (1 + max(blc(root->left), blc(root->right)));
}

int		btree_level_count(t_btree *root)
{
	return (blc(root));
}
