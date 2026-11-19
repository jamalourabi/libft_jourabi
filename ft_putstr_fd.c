/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:50:10 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:53:06 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(void)
// {
// 	ft_putstr_fd("hello", 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }
