/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:23:39 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/14 10:41:48 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	if (!dst && size == 0)
		return (0);
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= destlen)
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
