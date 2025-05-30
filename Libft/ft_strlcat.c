/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:28:22 by yutakumi          #+#    #+#             */
/*   Updated: 2025/05/12 22:11:29 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (!dest && size == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	else if (size < ft_strlen(dest))
		len += size;
	else
		len += ft_strlen(dest);
	while (dest[i])
		++i;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len);
}
