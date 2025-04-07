/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaku <yusaku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:01:05 by yusaku            #+#    #+#             */
/*   Updated: 2025/04/07 11:02:07 by yusaku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
// 		if (ft_isalpha(c))
// 			printf("'%c' is alphanumeric.\n", c);
// 		else
// 			printf("'%c' is NOT alphanumeric.\n", c);
// 		i++;
// 	}
// 	return (0);
// }