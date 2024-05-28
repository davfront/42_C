/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:03:06 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/21 10:04:07 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length < 2)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i + 1], tab[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}
