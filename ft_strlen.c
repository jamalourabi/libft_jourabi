/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:54:44 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:54:55 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%zu %zu\n", ft_strlen("hello"), ft_strlen(""));
// 	return (0);
// }
