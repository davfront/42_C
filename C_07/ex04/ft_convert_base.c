/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:18:55 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/19 16:07:59 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_base_valid(char *str);
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

int	intlen_base(int n, char *base)
{
	long int	n2;
	int			len;
	int			base_len;

	n2 = n;
	base_len = ft_strlen(base);
	len = 0;
	if (n2 == 0)
		return (1);
	if (n2 < 0)
	{
		len++;
		n2 = -n2;
	}
	while (n2 > 0)
	{
		n2 = n2 / base_len;
		len++;
	}
	return (len);
}

void	itoa_base(int n, char *base, char *str, int len)
{
	int			base_len;
	long int	n2;
	int			i;

	n2 = n;
	base_len = ft_strlen(base);
	if (n2 == 0)
		str[0] = base[0];
	if (n2 < 0)
	{
		str[0] = '-';
		n2 = -n2;
	}
	i = 0;
	while (n2 > 0)
	{
		str[len - 1 - i] = base[n2 % base_len];
		n2 = n2 / base_len;
		i++;
	}
	str[len] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			n;
	int			len;
	char		*str;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (0);
	n = ft_atoi_base(nbr, base_from);
	len = intlen_base(n, base_to);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	itoa_base(n, base_to, str, len);
	return (str);
}
