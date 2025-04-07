/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaku <yusaku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:03:00 by yusaku            #+#    #+#             */
/*   Updated: 2025/04/07 11:04:22 by yusaku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// #include "libft.h"

// int main(void)
// {
// 	int i;

// 	for (i = -5; i <= 132; i++)
// 	{
// 		int real = isascii(i);
// 		int mine = ft_isascii(i);
// 		if (real != mine)
// 			printf("NG: i = %d | isascii = %d,
//  ft_isascii = %d\n", i, real, mine);
// 	}
// 	printf("ft_isascii: テスト完了！\n");
// 	return (0);
// }
