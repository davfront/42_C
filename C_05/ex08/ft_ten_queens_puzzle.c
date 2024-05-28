/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:28:06 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/15 10:49:28 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_queens(int *queens)
{
	int		col;
	char	c;

	col = 0;
	while (col < 10)
	{
		c = '0' + queens[col];
		write(1, &c, 1);
		col++;
	}
	write(1, "\n", 1);
}

void	init_queens(int queens[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		queens[i] = 0;
		i++;
	}
}

int	is_row_free(int queens[10], int col, int row)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (i < col)
	{
		if (queens[i] == row)
			return (0);
		if (queens[i] - row == col - i)
			return (0);
		if (queens[i] - row == i - col)
			return (0);
		i++;
	}
	return (1);
}

void	solve_n_queens(int queens[10], int col, int *ptr_counter)
{
	int	row;

	row = 0;
	while (row < 10)
	{
		if (is_row_free(queens, col, row))
		{
			queens[col] = row;
			if (col < 9)
				solve_n_queens(queens, col + 1, ptr_counter);
			else
			{
				print_queens(queens);
				*ptr_counter += 1;
			}
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];
	int	counter;

	counter = 0;
	init_queens(queens);
	solve_n_queens(queens, 0, &counter);
	return (counter);
}
