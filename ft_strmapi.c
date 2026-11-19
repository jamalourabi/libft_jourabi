/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:24:35 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:55:11 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// static char	up(unsigned int i, char c)
// {
// 	(void)i;
// 	return (toupper(c));
// }

// int main(void)
// {
// 	char	*s;

// 	s = ft_strmapi("hello", up);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
