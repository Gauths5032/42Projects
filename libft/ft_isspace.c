/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 10:22:15 by glangloi          #+#    #+#             */
/*   Updated: 2016/02/18 10:24:53 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	return ((c == '\v' || c == '\r' || c == '\f' || c == ' ' || c == '\t'
				|| c == '\n') ? 1 : 0);
}
