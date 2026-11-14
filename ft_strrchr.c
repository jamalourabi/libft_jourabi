/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:00:10 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/14 12:23:31 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				last;
	unsigned char	ol;

	i = 0;
	last = -1;
	ol = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == ol)
			last = i;
		i++;
	}
	if (ol == '\0')
		return ((char *)&s[i]);
	if (last == -1)
		return (NULL);
	return ((char *)&s[last]);
}
