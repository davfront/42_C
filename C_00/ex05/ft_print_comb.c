/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:12:59 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/07 16:39:27 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

void	ft_print_comb_item(int d0, int d1, int d2)
{
	ft_putint(d0);
	ft_putint(d1);
	ft_putint(d2);
	if (!(d0 == 7 && d1 == 8 && d2 == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int		d0;
	int		d1;
	int		d2;

	d0 = 0;
	while (d0 < 10)
	{
		d1 = d0 + 1;
		while (d1 < 10)
		{
			d2 = d1 + 1;
			while (d2 < 10)
			{
				ft_print_comb_item(d0, d1, d2);
				d2++;
			}
			d1++;
		}
		d0++;
	}
}
