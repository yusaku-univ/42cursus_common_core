/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaku <yusaku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:06:52 by yusaku            #+#    #+#             */
/*   Updated: 2025/04/07 10:47:41 by yusaku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char test1[10] = "abcdefghi";
// 	char test2[10] = "abcdefghi";

// 	ft_bzero(test1, 5);
// 	printf("ft_bzero結果: ");
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", (unsigned char)test1[i]);
// 	printf("\n");
// 	memset(test2, 0, 5);
// 	printf("memset比較: ");
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", (unsigned char)test2[i]);
// 	printf("\n");
// 	return (0);
// }
