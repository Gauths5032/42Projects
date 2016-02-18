/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:00:49 by glangloi          #+#    #+#             */
/*   Updated: 2015/12/17 17:59:32 by lprunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

char	*ft_strcpy(char *dst, char *src)
{
	int		i;

	i = -1;
	while (src[++i])
	{
		dst[i] = src[i];
	}
	dst[i] = 0;
	return (dst);
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dst, char *src)
{
	int		len_dst;
	int		i;

	len_dst = ft_strlen(dst);
	i = -1;
	while (src[++i])
	{
		dst[len_dst + i] = src[i];
	}
	dst[len_dst + i] = 0;
	return (dst);
}

char	*ft_realloc(char *dst, char *src, int len_dst)
{
	int		len_src;
	char	*tmp;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	tmp = (char *)malloc(sizeof(char) * (len_dst + 1));
	if (!tmp)
	{
		if (dst)
			free(dst);
		return (NULL);
	}
	tmp = ft_strcpy(tmp, dst);
	free(dst);
	dst = (char *)malloc(sizeof(char) * (len_dst + len_src + 1));
	if (!dst)
	{
		if (tmp)
			free(tmp);
		return (NULL);
	}
	dst = ft_strcpy(dst, tmp);
	dst = ft_strcat(dst, src);
	free(tmp);
	return (dst);
}

char	*ft_get_str(char **argv, int comp)
{
	char	*buffer;
	char	*str;
	int		nread;
	int		fd;

	if (open(argv[comp], O_RDONLY) == -1)
		fd = 0;
	else
		fd = open(argv[comp], O_RDONLY);
	buffer = (char *)malloc(sizeof(char) * (BUF_SIZE2 + 1));
	str = (char *)malloc(sizeof(char));
	str[0] = 0;
	while ((nread = read(fd, buffer, BUF_SIZE2)) && (nread != -1))
	{
		buffer[nread] = 0;
		str = ft_realloc(str, buffer, 0);
		if (!str)
			return (0);
	}
	if (buffer)
		free(buffer);
	if (nread == -1)
		return (0);
	str = ft_verifstr(str, argv);
	return (str);
}
