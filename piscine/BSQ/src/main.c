/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:08:11 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 19:20:32 by lprunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

void	main_bis(int argc, char **argv, int compt, int i)
{
	char		*str;
	char		*e;
	t_elements	elem;
	t_square	sq;

	i = 0;
	e = ft_get_elements(argc, argv, compt);
	while (e[i] != '\0')
		i++;
	elem = *ft_create_elem(e[i - 3], e[i - 1], e[i - 2], ft_atoi(e, i));
	str = ft_get_str(argv, compt);
	elem = ft_get_col(elem, str);
	if (ft_validate_map(elem, str, 0, -1) == 1)
	{
		sq = ft_check(elem);
		ft_create_map(sq, str, elem, 0);
	}
	else
		ft_putstr("map error\n");
}

int		check(char **argv, int compt)
{
	char	*str;
	int		i;

	i = 0;
	if (open(argv[compt], O_RDONLY) == -1)
		return (-1);
	str = ft_get_str(argv, compt);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (-1);
}

int		main(int argc, char **argv)
{
	int			i;
	int			compt;

	compt = 1;
	if (open(argv[1], O_RDONLY) != -1)
	{
		while (compt < argc)
		{
			i = 0;
			if (check(argv, compt) == -1)
				ft_putstr("map error\n");
			else
				main_bis(argc, argv, compt, i);
			compt++;
		}
	}
	else if (argc == 1)
	{
		i = 0;
		main_bis(argc, argv, compt, i);
	}
	else
		ft_putstr("map error\n");
	return (0);
}
