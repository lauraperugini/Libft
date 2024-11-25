/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauraperugini <lauraperugini@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:51:52 by lauraperugi       #+#    #+#             */
/*   Updated: 2024/11/24 23:19:48 by lauraperugi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
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

char	*fill_word(const char *start, int len)
{
	char	*word;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	strncpy(word, start, len);
	word[len] = '\0';
	return (word);
}

void	ft_free(char **words)
{
	int i;

	if (words)
	{
		i = 0;
		while (words[i] != NULL)
		{
			free(words[i]);
			i++;
		}
		free(words);
	}
}

char	**ft_split(const char *s, char c)
{
	int	num_words;
	char	**words;
	int	i;
	int	start;
	int	word_len;
	int	j;

	if (!s)
		return (NULL);
	num_words = word_count(s, c);
	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!words)
		return (NULL);
	i = 0;
	start = -1;
	j = 0;

	while (s[j] != '\0')
	{
		if (s[j] != c && start == -1)
			start = j;
		if ((s[j] == c || s[j + 1] == '\0') && start != -1)
		{
			if (s[j] == c)
				word_len = j - start;
			else
				word_len = j - start + 1;

			words[i] = fill_word(s + start, word_len);
			if (!words[i])
			{
				ft_free(words);
				return (NULL);
			}
			i++;
			start = -1;
		}
		j++;
	}
	words[i] = NULL;
	return (words);
}
