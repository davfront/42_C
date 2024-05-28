/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:57:49 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/22 10:19:15 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define NO_ARG_MSG			"File name missing."
#define MULTI_ARG_MSG		"Too many arguments."
#define CANNOT_READ_MSG		"Cannot read file."
#define BUF_SIZE			1024

int		ft_strlen(char *str);
void	ft_putstr(char *str);

int	ft_error(char *str)
{
	write(2, str, ft_strlen(str));
	write(2, "\n", 1);
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		l;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
		return (ft_error(NO_ARG_MSG));
	if (argc > 2)
		return (ft_error(MULTI_ARG_MSG));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_error(CANNOT_READ_MSG));
	l = 1;
	while (l > 0)
	{
		l = read(fd, buf, BUF_SIZE);
		buf[l] = '\0';
		if (l > 0)
			ft_putstr(buf);
	}
	close(fd);
	return (0);
}
