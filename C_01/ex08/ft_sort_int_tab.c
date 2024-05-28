/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:03:53 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/08 12:43:26 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	compare_tab_item_with_next(int *tab, int size, int index)
{
	int		i;
	int		x;

	i = index;
	while (i < size)
	{
		if (tab[i] < tab[index])
		{
			x = tab[i];
			tab[i] = tab[index];
			tab[index] = x;
		}
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		compare_tab_item_with_next(tab, size, i);
		i++;
	}
}
