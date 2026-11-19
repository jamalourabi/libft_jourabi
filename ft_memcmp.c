/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:52:44 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:51:46 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;
	size_t					i;
	int						sum;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	sum = 0;
	while (i < n)
	{
		if (*str1 != *str2)
		{
			sum = *str1 - *str2;
			return (sum);
		}
		i++;
		str1++;
		str2++;
	}
	return (sum);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d %d\n", ft_memcmp("abc", "abd", 3), ft_memcmp("abc", "abc", 3));
// 	return (0);
// }
