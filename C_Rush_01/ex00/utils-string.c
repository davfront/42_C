/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils-string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:56:26 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/16 20:56:28 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(const char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		match = 1;
		j = 0;
		while (to_find[j] && match)
		{
			if (!str[i + j] || to_find[j] != str[i + j])
				match = 0;
			j++;
		}
		if (match)
			return (str + i);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) > 0)
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
