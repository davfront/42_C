/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:21:45 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/16 20:22:48 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
int		is_input_valid(int argc, char **argv);
void	get_input(int tab[16], char *str);
void	init_board(int board[16]);
void	print_board(int board[16]);
int		solve(int board[16], int views[16], int index);

int	main(int argc, char **argv)
{
	int	board[16];
	int	views[16];

	(void) argc;
	(void) argv;
	if (!is_input_valid(argc, argv))
	{
		ft_putstr("Error");
		return (0);
	}
	get_input(views, argv[1]);
	init_board(board);
	if (!solve(board, views, 0))
		ft_putstr("Error\n");
	else
		print_board(board);
	return (0);
}
