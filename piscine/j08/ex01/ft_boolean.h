/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 20:20:19 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/17 20:22:14 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG	"I have a pair number of arguments.\n"
# define ODD_MSG	"I have an impair number of arguments.\n"
# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN(n)	n % 2 == 0

typedef int			t_bool;
#endif
