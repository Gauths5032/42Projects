/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 15:14:33 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/23 15:14:50 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if (i > j)
	{
		if (j > k)
			return (j);
		else if (i > k)
			return (k);
		else
			return (i);
	}
	else
	{
		if (i > k)
			return (i);
		else if (j > k)
			return (k);
		else
			return (j);
	}
}
