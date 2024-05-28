/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils-views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:56:35 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/16 20:56:38 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	colup(int views[16], int col)
{
	return (views[col]);
}

int	coldown(int views[16], int col)
{
	return (views[4 + col]);
}

int	rowleft(int views[16], int row)
{
	return (views[4 * 2 + row]);
}

int	rowright(int views[16], int row)
{
	return (views[4 * 3 + row]);
}
