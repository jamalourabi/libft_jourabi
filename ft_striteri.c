/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:34:13 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:54:02 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// static void	up(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = toupper(*c);
// }

// int main(void)
// {
// 	char	s[] = "hello";

// 	ft_striteri(s, up);
// 	printf("%s\n", s);
// 	return (0);
// }
