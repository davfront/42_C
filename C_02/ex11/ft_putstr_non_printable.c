/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:17:56 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/14 19:03:31 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char_hex(unsigned char c)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	write(1, hex_chars + c / 16, 1);
	write(1, hex_chars + c % 16, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ') && str[i] <= '~')
		{
			write(1, str + i, 1);
		}
		else
		{
			write(1, "\\", 1);
			print_char_hex(str[i]);
		}
		i++;
	}
}
