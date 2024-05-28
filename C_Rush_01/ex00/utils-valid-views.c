/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils-valid-views.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:11:55 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/16 21:11:57 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	*position_by_colrow(int board[16], int col, int row);
int	colup(int views[16], int col);
int	coldown(int views[16], int col);
int	rowleft(int views[16], int row);
int	rowright(int views[16], int row);

int	get_colup(int board[16], int col)
{
	int	prev_height;
	int	current_height;
	int	counter;
	int	i;

	prev_height = 0;
	counter = 0;
	i = 0;
	while (i < 4)
	{
		current_height = *position_by_colrow(board, col, i);
		if (current_height > prev_height)
		{
			prev_height = current_height;
			counter++;
		}
		i++;
	}
	return (counter);
}

int	get_coldown(int board[16], int col)
{
	int	prev_height;
	int	current_height;
	int	counter;
	int	i;

	prev_height = 0;
	counter = 0;
	i = 0;
	while (i < 4)
	{
		current_height = *position_by_colrow(board, col, 4 - 1 - i);
		if (current_height > prev_height)
		{
			prev_height = current_height;
			counter++;
		}
		i++;
	}
	return (counter);
}

int	get_rowleft(int board[16], int row)
{
	int	prev_height;
	int	current_height;
	int	counter;
	int	i;

	prev_height = 0;
	counter = 0;
	i = 0;
	while (i < 4)
	{
		current_height = *position_by_colrow(board, i, row);
		if (current_height > prev_height)
		{
			prev_height = current_height;
			counter++;
		}
		i++;
	}
	return (counter);
}

int	get_rowright(int board[16], int row)
{
	int	prev_height;
	int	current_height;
	int	counter;
	int	i;

	prev_height = 0;
	counter = 0;
	i = 0;
	while (i < 4)
	{
		current_height = *position_by_colrow(board, 4 - 1 - i, row);
		if (current_height > prev_height)
		{
			prev_height = current_height;
			counter++;
		}
		i++;
	}
	return (counter);
}

int	valid_views(int board[16], int views[16], int index)
{
	int	col;
	int	row;

	col = index / 4;
	row = index % 4;
	if (row == 4 - 1)
	{
		if (colup(views, col) != get_colup(board, col))
			return (0);
		if (coldown(views, col) != get_coldown(board, col))
			return (0);
	}
	if (col == 4 - 1)
	{
		if (rowleft(views, row) != get_rowleft(board, row))
			return (0);
		if (rowright(views, row) != get_rowright(board, row))
			return (0);
	}
	return (1);
}
