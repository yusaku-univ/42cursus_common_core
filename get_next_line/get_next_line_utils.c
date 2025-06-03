/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaku <yusaku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:11:46 by mech-user         #+#    #+#             */
/*   Updated: 2025/05/28 10:23:54 by yusaku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		totalsize;
	char	*result;
	int		i;
	int		j;

	totalsize = ft_strlen(str1) + ft_strlen(str2);
	i = 0;
	result = malloc(sizeof(char) * (totalsize + 1));
	if (!result || !str1 || !str2)
		return (NULL);
	while (str1[i])
	{
		result[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		result[i] = str2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strchr(const char *str, int c)
{
	char	*string;
	size_t	i;

	string = (char *)string;
	i = 0;
	while (string[i] != c && string[i])
		i++;
	if (string[i] == c)
		return (&string[i]);
	else
		return (NULL);
}

void	ft_bzero(void *s, size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
}

char	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	total;
	size_t	i;

	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
