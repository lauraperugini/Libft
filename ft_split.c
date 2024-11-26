/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauraperugini <lauraperugini@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:51:52 by lauraperugi       #+#    #+#             */
/*   Updated: 2024/11/25 21:12:19 by lauraperugi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static size_t	word_len(char const *str, char c, size_t i)
{
	size_t	j;

	j = 0;
	while (str[i + j] && str[i + j] != c)
		j++;
	return (j);
}

static void	*ft_free(char **words, size_t w_pos)
{
	size_t	i;

	i = 0;
	while (i < w_pos)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	int		w_pos;
	int		w_len;
	int		i;

	w_pos = 0;
	i = 0;
	words = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!words)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			w_len = word_len(s, c, i);
			words[w_pos] = ft_substr(s, i, w_len);
			if (!words[w_pos++])
				return (ft_free(words, w_pos - 1));
			i = i + w_len;
		}
		else
			i++;
	}
	words[w_pos] = 0;
	return (words);
}
