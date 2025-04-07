/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaku <yusaku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:30:18 by yusaku            #+#    #+#             */
/*   Updated: 2025/04/07 10:15:33 by yusaku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

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
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include<unistd.h>
// #include<stdio.h>

// int	main(int argc, char *argv[])
// {
// 	int	i;

// 	if (argc < 2)
// 	{
// 		write (1, "\n", 1);
// 		return (0);
// 	}
// 	i = 1;
// 	while (argv[i])
// 	{
// 		printf ("%d\n", ft_atoi(argv[i]));
// 		i++;
// 	}
// 	return (0);
// }
