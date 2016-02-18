/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 15:23:27 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/23 15:24:47 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>
# include <string.h>

# define TRUE 1
# define FALSE 0
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

typedef int		t_ft_bool;

typedef struct	s_door
{
	int			state;
}				t_door;

void			open_door(t_door *door);
void			close_door(t_door *door);
t_ft_bool		is_door_open(t_door *door);
t_ft_bool		is_door_close(t_door *door);
#endif
