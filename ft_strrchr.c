/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:16:58 by obenhamm          #+#    #+#             */
/*   Updated: 2024/10/30 00:31:22 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (p[i] == c)
		{
			return (p + i);
		}
		i--;
	}
	if (p[0] == c)
		return (p + i);
	return (NULL);
}
