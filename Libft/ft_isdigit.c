/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaku <yusaku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:04:45 by yusaku            #+#    #+#             */
/*   Updated: 2025/04/07 11:05:16 by yusaku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
// 		if (ft_isdigit(c))
// 			printf("'%c' is alphanumeric.\n", c);
// 		else
// 			printf("'%c' is NOT alphanumeric.\n", c);
// 		i++;
// 	}
// 	return (0);
// }