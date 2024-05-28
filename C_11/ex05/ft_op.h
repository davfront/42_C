/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:12:02 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/21 10:21:37 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

int		ft_plus(int a, int b);
int		ft_minus(int a, int b);
int		ft_divide(int a, int b);
int		ft_multiply(int a, int b);
int		ft_modulo(int a, int b);

typedef struct s_op {
	char	symbol;
	int		(*ft)(int, int);
}	t_op;

# define DIV_BY_ZERO_MSG "Stop : division by zero"
# define MOD_BY_ZERO_MSG "Stop : modulo by zero"

#endif
