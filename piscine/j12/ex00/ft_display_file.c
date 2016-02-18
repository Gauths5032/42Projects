/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 23:28:17 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/31 23:29:16 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	read_file(char *file)
{
	int		i;
	char	buffer[4096];
	int		fd;
	int		rd;

	i = 0;
	fd = open(file, O_RDONLY);
	rd = read(fd, buffer, 4096);
	close(fd);
	while (i < rd)
	{
		write(1, &buffer[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		read_file(argv[1]);
	}
	return (0);
}
