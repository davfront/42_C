/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:33:59 by fmerle            #+#    #+#             */
/*   Updated: 2022/07/10 14:24:54 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_line(char left, char middle, char right, int x)
{
	int	i;

	i = 1;
	if (x > 0)
		ft_putchar(left);
	while (i++ < x - 1)
		ft_putchar(middle);
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y, char *format)
{
	int	i;

	i = 1;
	if (y > 0)
		write_line(format[0], format[1], format[2], x);
	while (i++ < y - 1)
		write_line(format[3], format[4], format[5], x);
	if (y > 1)
		write_line(format[6], format[7], format[8], x);
}
