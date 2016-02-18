/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 16:54:52 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/24 16:57:40 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_delimiter(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_delimiter(str[i]))
			if (ft_is_delimiter(str[i + 1]) || (str[i + 1] == '\0'))
				count++;
		i++;
	}
	return (count);
}

char	*ft_create_word(char *str)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	i = 0;
	while (!ft_is_delimiter(str[i]) && str[i] != '\0')
	{
		len++;
		i++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (!ft_is_delimiter(str[i]) && str[i] != '\0')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	*ft_find_next_word(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_delimiter(str[i]))
		{
			if (!ft_is_delimiter(str[i + 1]))
			{
				return (&str[i + 1]);
			}
		}
		i++;
	}
	return (&str[i]);
}

char	**ft_split_whitespaces(char *str)
{
	int		num_of_words;
	char	**res;
	int		i;

	num_of_words = ft_count_words(str);
	res = (char **)malloc(sizeof(char *) * (num_of_words + 1));
	if (ft_is_delimiter(str[0]))
		str = ft_find_next_word(str);
	i = 0;
	while (i < num_of_words)
	{
		res[i] = ft_create_word(str);
		str = ft_find_next_word(str);
		i++;
	}
	res[i] = 0;
	return (res);
}
