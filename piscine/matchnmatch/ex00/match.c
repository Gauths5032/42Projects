/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 20:38:30 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/25 20:44:37 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		return (match(s1 + 1, s2));
	else if (*s2 == '*' && !*s1)
		return (match(s1, s2 + 1));
	else if (*s2 == '*' && *s2 && *s1)
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else
		return (0);
}
