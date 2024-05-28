/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:16:32 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/11 09:16:36 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i] != '\0' && result == 1)
	{
		if (
			!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z')
		)
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
