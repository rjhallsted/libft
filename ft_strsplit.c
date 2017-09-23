/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 10:03:06 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/22 19:23:02 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char const	*forward(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

static int			word_length(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int			count_words(char const *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		s += word_length(s, c);
		i++;
		s = forward(s, c);
	}
	return (i);
}

void				free_all(char ***words, int last_index)
{
	while (last_index >= 0)
	{
		free(*words[last_index]);
		last_index--;
	}
	free(*words);
	*words = NULL;
}

char				**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		word_count;
	int		i;
	int		wlen;

	s = forward(s, c);
	word_count = count_words(s, c);
	if (!(words = (char **)malloc(sizeof(char *) * word_count)))
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		wlen = word_length(s, c);
		if (!(words[i] = ft_strsub(s, 0, wlen)))
		{
			free_all(&words, i - 1);
			return (NULL);
		}
		s = forward(s + wlen, c);
		i++;
	}
	return (words);
}
