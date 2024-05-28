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
#include <libgen.h>
#include <string.h>
#include <errno.h>

#define BUF_SIZE	10240

int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);

int	ft_error(char *str)
{
	write(2, str, ft_strlen(str));
	write(2, "\n", 1);
	return (1);
}

void	display_fd(int fd)
{
	int		l;
	char	buf[BUF_SIZE + 1];

	l = 1;
	while (l > 0)
	{
		l = read(fd, buf, BUF_SIZE);
		buf[l] = '\0';
		if (l > 0)
			ft_putstr(buf);
	}
}

void	display_err(char *exec_path, char *file_path)
{
	ft_putstr(basename(exec_path));
	ft_putstr(": ");
	ft_putstr(file_path);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

int	main(int argc, char **argv)
{
	int		i;
	int		fd;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			display_err(argv[0], argv[i]);
		else
		{
			display_fd(fd);
			close(fd);
		}
		i++;
	}
	return (0);
}
