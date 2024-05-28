/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:53:46 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/15 11:46:52 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	compare_tab_item_with_next(char **tab, int size, int index)
{
	int		i;
	char	*x;

	i = index;
	while (i < size)
	{
		if (ft_strcmp(tab[i], tab[index]) < 0)
		{
			x = tab[i];
			tab[i] = tab[index];
			tab[index] = x;
		}
		i++;
	}
}

void	ft_sort_str_tab(char **tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		compare_tab_item_with_next(tab, size, i);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		params_size;
	char	**params;

	if (argc <= 1)
		return (0);
	params = argv + 1;
	params_size = argc - 1;
	ft_sort_str_tab(params, params_size);
	i = 0;
	while (i < params_size)
	{
		ft_putstr(params[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
