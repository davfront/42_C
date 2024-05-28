/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:42:44 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/19 16:08:29 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int		n;
	int		i;
	int		is_prev_sep;

	n = 0;
	i = 0;
	is_prev_sep = 1;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			is_prev_sep = 1;
		else
		{
			if (is_prev_sep)
				n++;
			is_prev_sep = 0;
		}
		i++;
	}
	return (n);
}

char	*get_word(char *src, char *charset)
{
	char	*dest;
	int		wl;
	int		i;

	i = 0;
	while (src[i] && !is_sep(src[i], charset))
		i++;
	wl = i;
	dest = (char *)malloc(sizeof(char) * (wl + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] && !is_sep(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	put_words(char *str, char *charset, char **strs)
{
	int		n;
	int		i;
	int		is_prev_sep;

	n = 0;
	i = 0;
	is_prev_sep = 1;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			is_prev_sep = 1;
		else
		{
			if (is_prev_sep)
			{
				strs[n] = get_word(str + i, charset);
				if (strs[n] == NULL)
					return (0);
				n++;
			}
			is_prev_sep = 0;
		}
		i++;
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		wc;
	char	**strs;

	wc = word_count(str, charset);
	strs = (char **)malloc(sizeof(char *) * (wc + 1));
	if (strs == NULL)
		return (NULL);
	if (!put_words(str, charset, strs))
		return (NULL);
	strs[wc] = NULL;
	return (strs);
}
