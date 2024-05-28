/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:39:48 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/13 09:50:14 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	contains_duplicates(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	contains_plus_or_minus(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	is_base_valid(char *str)
{
	if (ft_strlen(str) < 2)
		return (0);
	if (contains_duplicates(str))
		return (0);
	if (contains_plus_or_minus(str))
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			base_length;

	if (!is_base_valid(base))
		return ;
	n = nbr;
	base_length = ft_strlen(base);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_length)
		ft_putnbr_base(n / base_length, base);
	write(1, base + (n % base_length), 1);
}
