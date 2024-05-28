/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:17:41 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/11 09:17:43 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	if (
		(c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9')
	)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_prev_alphanum;

	i = 0;
	is_prev_alphanum = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (is_prev_alphanum == 1)
				str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_prev_alphanum == 0)
				str[i] -= 32;
		}
		is_prev_alphanum = is_alphanumeric(str[i]);
		i++;
	}
	return (str);
}
