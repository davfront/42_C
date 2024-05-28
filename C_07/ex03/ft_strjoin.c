/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:02:21 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/19 15:48:17 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strjoin_length(int size, char **strs, char *sep)
{
	int		join_len;
	int		sep_len;
	int		i;

	sep_len = ft_strlen(sep);
	join_len = 0;
	i = 0;
	while (i < size)
	{
		join_len += ft_strlen(strs[i]);
		if (i < size - 1)
			join_len += sep_len;
		i++;
	}
	return (join_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		result_len;
	char	*result_str;
	int		i;

	result_len = ft_strjoin_length(size, strs, sep);
	result_str = (char *)malloc(sizeof(char) * (result_len + 1));
	result_str[0] = '\0';
	if (result_str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(result_str, strs[i]);
		if (i < size - 1)
			ft_strcat(result_str, sep);
		i++;
	}
	result_str[result_len] = '\0';
	return (result_str);
}
