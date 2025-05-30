/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:00:20 by yutakumi          #+#    #+#             */
/*   Updated: 2025/05/12 18:52:15 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_nbr(int n)
{
	long	nbr;
	size_t	count;

	nbr = n;
	count = 1;
	if (nbr < 0)
	{
		count++;
		nbr *= -1;
	}
	while (nbr >= 10)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	i;
	size_t	count;
	char	*str;

	nbr = n;
	count = count_nbr(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[0] = '0';
	i = count - 1;
	while (nbr > 0)
	{
		str[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	int		n1;
// 	int		n2;
// 	int		n3;

// 	n1 = 0;
// 	n2 = -2147483648;
// 	n3 = 2147483647;
// 	str1 = ft_itoa(n1);
// 	str2 = ft_itoa(n2);
// 	str3 = ft_itoa(n3);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	printf("%s\n", str3);
// 	free(str1);
// 	free(str2);
// 	free(str3);
// 	return (0);
// }
