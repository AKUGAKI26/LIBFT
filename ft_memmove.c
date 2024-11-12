/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:16:35 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/04 13:33:26 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (!dst && !src)
	{
		return (NULL);
	}
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	i = len;
	if (p1 < p2)
		ft_memcpy(dst, src, len);
	else if (p1 > p2)
	{
		while (i > 0)
		{
			p1[i - 1] = p2[i - 1];
			i--;
		}
	}
	return (dst);
}
