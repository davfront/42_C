/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:35:50 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/13 11:35:52 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt_max;

	sqrt_max = 46340;
	i = 2;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= sqrt_max && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
