/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:16:58 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/04 14:08:53 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *)s;
	i = (int)ft_strlen(s);
	while (i > 0)
	{
		if (p[i] == (char)c)
		{
			return (p + i);
		}
		i--;
	}
	if (p[i] == (char)c)
		return ((char *)s);
	return (NULL);
}
