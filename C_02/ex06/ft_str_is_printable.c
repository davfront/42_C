/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:17:12 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/11 09:17:15 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i] != '\0' && result == 1)
	{
		if ((str[i] < ' ' || str[i] > '~'))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
