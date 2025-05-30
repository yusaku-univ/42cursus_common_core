/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:24:39 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/30 19:35:18 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	last;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	last = len + 1;
	while (i <= len)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			last = i;
		}
		i++;
	}
	if (last == len + 1)
		return (NULL);
	else
		return ((char *)(s + last));
}
