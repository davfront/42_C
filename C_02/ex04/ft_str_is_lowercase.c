/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:16:50 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/11 09:16:52 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i] != '\0' && result == 1)
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
