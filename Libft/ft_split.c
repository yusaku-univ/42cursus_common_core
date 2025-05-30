/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 22:36:00 by yutakumi          #+#    #+#             */
/*   Updated: 2025/05/12 21:50:07 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	*ft_word(char const *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_strings(char **strings, size_t j)
{
	while (j > 0)
	{
		j--;
		free(strings[j]);
	}
	free(strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	strings = (char **)malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (!strings)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			strings[j] = ft_word(&s[i], c);
			if (!strings[j])
				return (free_strings(strings, j), NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	strings[j] = NULL;
	return (strings);
}
