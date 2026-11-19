/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:00:10 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:55:42 by jourabi          ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
// 	char	*s = "hello";

// 	printf("%s | %p\n", ft_strrchr(s, 'l'), (void *)ft_strrchr(s, 'z'));
// 	return (0);
// }
