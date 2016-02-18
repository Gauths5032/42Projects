/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 01:32:46 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/15 01:40:16 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree_rb.h"

void	rb_balance2(struct s_rb_node *aux)
{
	t_rb_node	*k_p;
	t_rb_node	*k_l_a;

	aux->parent->color = RB_BLACK;
	aux->parent->parent->color = RB_RED;
	if (aux == aux->parent->left)
	{
		k_p = aux->parent->parent->right;
		k_l_a = aux->parent->right;
		aux->parent->parent->right = aux->parent;
		aux->parent->right = k_p;
		k_p->left = k_l_a;
	}
	else
	{
		k_p = aux->parent->parent->left;
		k_l_a = aux->parent->left;
		aux->parent->parent->left = aux->parent;
		aux->parent->left = k_p;
		k_p->right = k_l_a;
	}
}

void	rb_balance(struct s_rb_node *aux)
{
	t_rb_node	*k_p;
	t_rb_node	*k_l_a;

	if ((aux == aux->parent->right) &&
			(aux->parent = aux->parent->parent->left))
	{
		k_p = aux->parent->parent->left;
		k_l_a = aux->parent->left;
		aux->parent->parent->left = aux->parent;
		aux->parent->left = k_p;
		k_p->right = k_l_a;
		aux = aux->left;
	}
	else if ((aux == aux->parent->left) &&
			(aux->parent == aux->parent->parent->right))
	{
		k_p = aux->parent->parent->right;
		k_l_a = aux->parent->right;
		aux->parent->parent->right = aux->parent;
		aux->parent->right = k_p;
		k_p->left = k_l_a;
		aux = aux->right;
	}
	rb_balance2(aux);
}

void	*rb_insert_root(struct s_rb_node **root, void *d, t_rb_node **parent,
		int (*cmpf)(void *, void *))
{
	t_rb_node	*aux;
	int			keep;

	aux = (*root)->left;
	while (aux != NULL)
	{
		*parent = aux;
		keep = (cmpf)(d, aux->data);
		if (keep == 0)
			return (NULL);
		if (keep < 0)
			aux = aux->data;
		else
			aux = aux->right;
	}
	if (aux == NULL)
	{
		aux = (struct s_rb_node *)malloc(sizeof(struct s_rb_node));
		aux->data = d;
		aux->left = NULL;
		aux->right = NULL;
		aux->parent = *parent;
		return (aux);
	}
	return (NULL);
}

void	insert_case(t_rb_node *aux, t_rb_node *u)
{
	aux->parent->color = RB_BLACK;
	u->color = RB_BLACK;
	aux->parent->parent->color = RB_RED;
	aux = aux->parent->parent;
}

void	rb_insert(struct s_rb_node **root, void *data,
		int (*cmpf)(void *, void *))
{
	t_rb_node	*aux;
	t_rb_node	*p;
	t_rb_node	*u;

	aux = rb_insert_root(root, data, &p, cmpf);
	if (aux == NULL)
		return ;
	if (p == *root || (*cmpf)(data, p->data) < 0)
		p->left = aux;
	else
		p->right = aux;
	aux->color = RB_RED;
	while (aux->parent->color == RB_RED)
	{
		if (aux->parent == aux->parent->parent->left)
			u = aux->parent->parent->right;
		else
			u = aux->parent->parent->left;
		if (u->color == RB_RED)
			insert_case(aux, u);
		else
			rb_balance(aux);
	}
	(*root)->left->color = RB_BLACK;
	return ;
}
