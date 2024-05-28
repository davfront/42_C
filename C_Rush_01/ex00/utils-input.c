/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils-input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:56:09 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/16 20:56:16 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(const char *s1, char *s2);

int	is_input_valid(int argc, char **argv)
{
	int		i;
	int		size;
	int		input_length;

	size = 4;
	input_length = size * 4 * 2 - 1;
	if (argc != 2)
		return (0);
	if (ft_strcmp(argv[0], "./rush-01"))
		return (0);
	if (ft_strlen(argv[1]) != input_length)
		return (0);
	i = 0;
	while (i < input_length)
	{
		if (argv[1][i] - '0' < 1 || argv[1][i] - '0' > size)
			return (0);
		if (i + 1 < input_length - 1 && argv[1][i + 1] != ' ')
			return (0);
		if (i + 1 == input_length - 1 && argv[1][i + 1] != '\0')
			return (0);
		i += 2;
	}
	return (1);
}

void	get_input(int tab[16], char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		tab[i] = str[2 * i] - '0';
		i++;
	}
}
