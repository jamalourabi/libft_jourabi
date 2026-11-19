/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:23:39 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:54:26 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = 0;
	while (destlen < size && dst[destlen])
		destlen++;
	if (size == destlen)
		return (size + srclen);
	i = 0;
	while (src[i] != '\0' && (destlen + i + 1) < size)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
// 	char	dst[10] = "abc";
// 	size_t	r;

// 	r = ft_strlcat(dst, "defghijkl", sizeof(dst));
// 	printf("%zu \"%s\"\n", r, dst);
// 	return (0);
// }
