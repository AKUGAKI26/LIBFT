/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:15:27 by obenhamm          #+#    #+#             */
/*   Updated: 2024/10/29 18:36:35 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long			r;
	int				s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}

/*int main() {
    const char *tests[] = {
        "469999999999999999999999999999999999858588999999999999", 
        "2147483648",
        NULL
    };


    for (int i = 0; tests[i] != NULL; i++) {
        int result = atoi(tests[i]);
        printf("Input: '%s' => atoi: %d\n", tests[i], result);
    }
    printf("my function  tests :\n");
    for (int i = 0; tests[i] != NULL; i++) {
        int result = ft_atoi(tests[i]);
        printf("Input: '%s' => atoi: %d\n", tests[i], result);
    }
    
    return (0);
}*/