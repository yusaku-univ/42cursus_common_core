/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaku <yusaku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:11:08 by yusaku            #+#    #+#             */
/*   Updated: 2025/04/07 11:11:54 by yusaku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char tests[] = {'A', 'z', '5', '*', '\n', ' '};
// 	int i = 0;

// 	while (i < 6)
// 	{
// 		char c = tests[i];
// 		if (ft_isprint(c))
// 			printf("'%c' is alphanumeric.\n", c);
// 		else
// 			printf("'%c' is NOT alphanumeric.\n", c);
// 		i++;
// 	}
// 	return (0);
// }