/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:02:40 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/05 20:20:06 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	convert(int m, int sign, int count_n, char *str)
{
	while (m > 0)
	{
		str[count_n + sign - 1] = m % 10 + '0';
		m = m / 10;
		count_n--;
	}
	if (sign > 0)
	{
		str[0] = '-';
	}
}

int	count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		count_n;

	sign = 0;
	count_n = count(n);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		sign++;
	}
	str = (char *)malloc(count_n + sign + 1);
	if (!str)
		return (NULL);
	str[count_n + sign] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	convert(n, sign, count_n, str);
	return (str);
}
