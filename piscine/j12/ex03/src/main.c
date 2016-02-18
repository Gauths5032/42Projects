/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:01:30 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/11 13:03:45 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

t_tab	ft_change(t_tab pn)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		pn.previous[i] = pn.next[i];
		pn.next[i] = '\0';
		i++;
	}
	return (pn);
}

t_tab	ft_init(t_tab pn)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		pn.previous[i] = '\0';
		pn.next[i] = '\0';
		i++;
	}
	return (pn);
}

int		ft_mainbis(t_ints a, t_tab pn, char *av)
{
	char	buffer;
	int		c;

	c = 1;
	if (ft_strcmp(av, "-C") == 0)
		c = 0;
	while (read(a.fd, &buffer, 1) != 0)
	{
		pn.next[a.c16] = buffer;
		a.c16++;
		a.ctt++;
		if (a.c16 == 16)
		{
			a.star = ft_print(pn, a.ctt - a.c16, a.star, c);
			a.c16 = 0;
			pn = ft_change(pn);
		}
	}
	if (pn.next[0] != '\0')
		ft_print(pn, a.ctt - a.c16, 0, c);
	return (a.ctt);
}

int		ft_error(int ac, char **av, int i)
{
	ft_putstr("hexdump: ");
	ft_putstr(av[i]);
	ft_putstr(": No such file or directory\n");
	if (i == ac - 1)
	{
		ft_putstr("hexdump: ");
		ft_putstr(av[i]);
		ft_putstr(": Bad file descriptor\n");
	}
	return (-10);
}

int		main(int argc, char **argv)
{
	t_ints	a;
	t_tab	pn;

	a.i = 0;
	if (ft_strcmp(argv[1], "-C") == 0)
		a.i = 1;
	a.c16 = 0;
	a.ctt = 0;
	a.star = 0;
	pn = ft_init(pn);
	while (++a.i < argc)
	{
		a.fd = open(argv[a.i], O_RDONLY);
		if (a.fd >= 0)
			a.ctt = ft_mainbis(a, pn, argv[1]);
		else
			a.ctt = ft_error(argc, argv, a.i);
	}
	if (a.ctt != -10)
	{
		ft_printnbchar(a.ctt, ft_strcmp(argv[1], "-C"));
		ft_putchar('\n');
	}
	close(a.fd);
	return (0);
}
