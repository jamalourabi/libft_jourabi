/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:17:47 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:54:37 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (src[n])
	{
		n++;
	}
	if (size == 0)
		return (n);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
// 	char	dst[5];
// 	size_t	r;

// 	r = ft_strlcpy(dst, "hello world", sizeof(dst));
// 	printf("%zu \"%s\"\n", r, dst);
// 	return (0);
// }
