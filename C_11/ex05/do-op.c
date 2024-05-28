/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:19:51 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/21 11:35:08 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

void	init_ops(t_op ops[5])
{
	ops[0].symbol = '+';
	ops[0].ft = &ft_plus;
	ops[1].symbol = '-';
	ops[1].ft = &ft_minus;
	ops[2].symbol = '/';
	ops[2].ft = &ft_divide;
	ops[3].symbol = '*';
	ops[3].ft = &ft_multiply;
	ops[4].symbol = '%';
	ops[4].ft = &ft_modulo;
}

void	print_op(int a, int b, char op_symbol, t_op *ops)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (op_symbol == ops[i].symbol)
		{
			ft_putnbr((*(ops[i].ft))(a, b));
			return ;
		}
		i++;
	}
	ft_putstr("0");
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	op_symbol;
	t_op	ops[5];

	init_ops(ops);
	if (argc != 4)
		return (0);
	if (argv[2][0] == '\0' || argv[2][1] != '\0')
	{
		ft_putstr("0\n");
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op_symbol = argv[2][0];
	if (op_symbol == '/' && b == 0)
		ft_putstr(DIV_BY_ZERO_MSG);
	else if (op_symbol == '%' && b == 0)
		ft_putstr(MOD_BY_ZERO_MSG);
	else
		print_op(a, b, op_symbol, ops);
	ft_putstr("\n");
	return (0);
}
