/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 00:29:53 by glangloi          #+#    #+#             */
/*   Updated: 2015/11/02 19:07:34 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		ft_max(int left, int right)
{
	if (left > right)
		return (left);
	else
		return (right);
}

int		btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (ft_max(btree_level_count(root->left),
		btree_level_count(root->right)) + 1);
}

void	btree_apply_by_level2(t_btree *root, int current_level, int *i,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
		return ;
	if (i[1] == current_level)
	{
		(*applyf)(root->item, current_level, (i[2] == i[1]) ? 0 : 1);
		i[2] = current_level;
	}
	else
	{
		btree_apply_by_level2(root->left, current_level + 1, i, applyf);
		btree_apply_by_level2(root->right, current_level + 1, i, applyf);
	}
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level,
			int is_first_elem))
{
	int		i[4];

	i[0] = btree_level_count(root);
	i[1] = 0;
	while (i[1] < i[0])
	{
		if (i[1] == 0)
			i[2] = -1;
		else
			i[2] = i[1] - 1;
		btree_apply_by_level2(root, 0, i, applyf);
		i[1]++;
	}
}
