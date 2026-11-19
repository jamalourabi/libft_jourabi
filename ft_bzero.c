/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:36:07 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:05:17 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	char	buf[4] = "abc";

// 	ft_bzero(buf, 2);
// 	printf("%d %d %c\n", buf[0], buf[1], buf[2]);
// 	return (0);
// }