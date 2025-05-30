/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:05:42 by yutakumi          #+#    #+#             */
/*   Updated: 2025/05/12 20:53:21 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > ((LONG_MAX - (str[i] - '0')) / 10) && sign == 1)
			return (-1);
		if (result > ((LONG_MAX - (str[i] - '0')) / 10) && sign == -1)
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	int	i;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		printf("%d\n", ft_atoi(argv[i]));
// 		printf("%d\n", atoi(argv[i]));
// 		i++;
// 	}
// }
