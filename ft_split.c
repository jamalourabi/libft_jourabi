/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:51:22 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:45:12 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	if (c == '\0')
	{
		if (s && s[0] != '\0')
			return (1);
		return (0);
	}
	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		words++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] == c)
			i++;
	}
	return (words);
}

static size_t	len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	free_splitter(char **strings, size_t i)
{
	while (i > 0)
	{
		i--;
		free(strings[i]);
	}
	free(strings);
	return (0);
}

static int	splitter(char **strings, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (i < words)
	{
		k = 0;
		while (s[j] == c)
			j++;
		strings[i] = malloc(sizeof(char) * (len(&s[j], c) + 1));
		if (!strings[i])
			return (free_splitter(strings, i));
		while (s[j] && s[j] != c)
		{
			strings[i][k] = s[j];
			j++;
			k++;
		}
		strings[i][k] = '\0';
		i++;
	}
	strings[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	if (!splitter(strings, s, c, words))
		return (NULL);
	return (strings);
}
// #include <stdio.h>
// int main(void)
// {
// 	char	**t;
// 	int		i;

// 	t = ft_split("  hello big  world ", ' ');
// 	i = 0;
// 	while (t[i])
// 	{
// 		printf("[%s]\n", t[i]);
// 		free(t[i]);
// 		i++;
// 	}
// 	free(t);
// 	return (0);
// }
