/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 10:03:06 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/25 10:43:17 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char	*forward(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static int	word_length(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	count_prep_words(char *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		s += word_length(s, c);
		i++;
		*s = '\0';
		if (*(s + 1))
			s = forward(s + 1, c);
	}
	return (i);
}

static void	free_all(char ***words, int last_index)
{
	while (last_index >= 0)
	{
		free(*words[last_index]);
		last_index--;
	}
	free(*words);
	*words = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	char 	*tmp;
	int		word_count;
	int		i;

	if(!(tmp = ft_strdup(s)))
		return (NULL);
	tmp = forward(tmp, c);
	word_count = count_prep_words(tmp, c);
	if (!(words = (char **)ft_memalloc(sizeof(char *) * (word_count + 1))))
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		if (!(words[i] = ft_strdup(tmp)))
		{
			free_all(&words, i - 1);
			return (NULL);
		}
		if (*(tmp + ft_strlen(tmp) + 1))
			tmp = forward(tmp + ft_strlen(tmp) + 1, c);
		i++;
	}
	words[word_count] = NULL;
	return (words);
}
