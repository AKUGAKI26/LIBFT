/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:09:06 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/10 20:19:32 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	srclen;
	size_t	destlen;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	srclen = ft_strlen(s1);
	destlen = ft_strlen(s2);
	str = ft_calloc((srclen + destlen) + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, srclen + 1);
	ft_strlcat(str, s2, destlen + srclen + 1);
	return (str);
}
