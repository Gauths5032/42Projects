/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 20:39:24 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/25 20:45:21 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		return (nmatch(s1 + 1, s2));
	else if (*s2 == '*' && !*s1)
		return (nmatch(s1, s2 + 1));
	else if (*s2 == '*' && *s2 && *s1)
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else
		return (0);
}
