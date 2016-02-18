/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:01:45 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 19:18:16 by lprunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_get_elements(int argc, char **argv, int comp)
{
	char	buffer[BUF_SIZE + 1000];
	char	*elements;
	int		i;
	int		fd;

	i = 0;
	if (open(argv[comp], O_RDONLY) == -1 || argc == 0)
		fd = 0;
	else
		fd = open(argv[comp], O_RDONLY);
	elements = malloc(sizeof(BUF_SIZE));
	while (read(fd, buffer, BUF_SIZE) && buffer[0] != '\n')
	{
		elements[i] = buffer[0];
		i++;
	}
	elements[i] = '\0';
	return (elements);
}
