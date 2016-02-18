/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glangloi <glangloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 02:50:51 by glangloi          #+#    #+#             */
/*   Updated: 2015/10/31 14:33:46 by glangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

typedef struct	s_ops
{
	char		op;
	void		(*f)(int, int);
}				t_ops;

int				ft_atoi(char *str);

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_multiply(int number1, int number2);
void			ft_divide(int number1, int number2);
void			ft_sum(int number1, int number2);
void			ft_subtract(int number1, int number2);
void			ft_modulo(int number1, int number2);

#endif
