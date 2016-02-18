/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 15:20:55 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/23 15:21:46 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS "BG";

# include <string.h>

typedef struct	s_perso
{
	char		*name;
	float		life;
	int			age;
	char		*profession;
}				t_perso;
#endif
