/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:12:51 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/14 10:51:33 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ol;
	size_t				i;

	str = (const unsigned char *)s;
	ol = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ol)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
