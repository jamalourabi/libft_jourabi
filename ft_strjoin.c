/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:07:20 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:54:15 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cat(char *ptr, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ptr = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	cat(ptr, s1, s2);
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
// 	char	*s;

// 	s = ft_strjoin("hello ", "world");
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
