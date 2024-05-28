/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:18:04 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/14 19:03:12 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr_hex(long int n, int p)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	if (p > 1)
		print_addr_hex(n / 16, p - 1);
	write(1, hex_chars + n % 16, 1);
}

void	print_char_hex(unsigned char c)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	write(1, hex_chars + c / 16, 1);
	write(1, hex_chars + c % 16, 1);
}

void	print_addr_chars(void *addr, unsigned int size)
{
	unsigned int		i;
	char				*str;

	str = addr;
	i = 0;
	while (str[i] && i < size)
	{
		if ((str[i] >= ' ' && str[i] <= '~'))
		{
			write(1, str + i, 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
}

void	print_chars_hex(char *str, int size)
{
	int		i;
	int		is_str_ended;

	i = 0;
	is_str_ended = 0;
	while (i < size)
	{
		if (str[i] == '\0')
			is_str_ended = 1;
		if (!is_str_ended)
			print_char_hex(str[i]);
		else
			write(1, "  ", 2);
		if (i % 2 > 0 && i != size - 1)
			write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	i;

	str = addr;
	i = 0;
	if (size < 1)
		return (addr);
	print_addr_hex((long int) addr, 16);
	write(1, ": ", 2);
	print_chars_hex(addr, size);
	write(1, " ", 1);
	print_addr_chars(addr, size);
	write(1, "\n", 1);
	while (str[i])
		i++;
	if (i > size)
		ft_print_memory(addr + size, size);
	return (addr);
}
