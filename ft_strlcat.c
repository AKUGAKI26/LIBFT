/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:16:44 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/10 20:47:15 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlength;
	size_t	srclength;

	if (dstsize == 0 && !dst && src)
		return (ft_strlen(src));
	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	i = dstlength;
	j = 0;
	if (dstsize == 0 || dstlength >= dstsize)
		return (dstsize + srclength);
	if (dstsize > 0)
	{
		while (src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = (char)src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
	}
	return (dstlength + srclength);
}
