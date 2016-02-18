/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 15:23:35 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/16 15:24:20 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_num(str[i])))
			return (0);
		i++;
	}
	return (1);
}
