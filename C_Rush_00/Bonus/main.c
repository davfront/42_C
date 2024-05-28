/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:35:57 by fmerle            #+#    #+#             */
/*   Updated: 2022/07/10 14:29:52 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y, char *format);
void	ft_putchar(char c);

// This new "rush" can solve the 5 exercices with an extra string parameter'.
// This string contains the list of the 9 characters to display:
//	1. left character	for the top line
//	2. middle character	for the top line
//	3. right character	for the top line
//	4. left character	for the middle lines
//	5. middle character	for the middle lines
//	6. right character	for the middle lines
//	7. left character	for the bottom line
//	8. middle character	for the bottom line
//	9. right character	for the bottom line

int	main(void)
{
	rush(5, 5, "o-o| |o-o");
	ft_putchar('\n');
	ft_putchar('\n');
	rush(5, 5, "/*\\* *\\*//");
	ft_putchar('\n');
	ft_putchar('\n');
	rush(5, 5, "ABAB BCBC");
	ft_putchar('\n');
	ft_putchar('\n');
	rush(5, 5, "ABCB BABC");
	ft_putchar('\n');
	ft_putchar('\n');
	rush(5, 5, "ABCB BCBA");
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
