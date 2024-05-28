/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:17:04 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/11 09:17:06 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i] != '\0' && result == 1)
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
