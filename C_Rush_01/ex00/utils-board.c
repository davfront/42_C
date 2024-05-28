/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils-board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:31:04 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/16 20:31:06 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		colup(int views[16], int col);
int		coldown(int views[16], int col);
int		rowleft(int views[16], int row);
int		rowright(int views[16], int row);
int		valid_views(int board[16], int views[16], int index);

void	init_board(int board[16])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		board[i] = 0;
	i++;
	}
}

void	print_board(int board[16])
{
	int	col;
	int	row;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar('0' + board[col * 4 + row]);
			if (col < 4 - 1)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			col++;
		}
		row++;
	}
}

int	*position_by_colrow(int board[16], int col, int row)
{
	return (&(board[col * 4 + row]));
}

int	is_valid(int board[16], int views[16], int index)
{
	int	col;
	int	row;
	int	i;

	col = index / 4;
	row = index % 4;
	i = 0;
	while (i < col)
	{
		if (*position_by_colrow(board, i, row) == board[index])
			return (0);
		i++;
	}
	i = 0;
	while (i < row)
	{
		if (*position_by_colrow(board, col, i) == board[index])
			return (0);
		i++;
	}
	if (!valid_views(board, views, index))
		return (0);
	return (1);
}

int	solve(int board[16], int views[16], int index)
{
	int	height;

	if (index == 16)
		return (1);
	height = 1;
	while (height <= 4)
	{
		board[index] = height;
		if (is_valid(board, views, index))
		{
			if (solve(board, views, index + 1))
				return (1);
		}
		height++;
	}
	board[index] = 0;
	return (0);
}
