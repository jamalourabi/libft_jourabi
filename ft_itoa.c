/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:52:40 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:08:12 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = get_len(nb);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (n == 0)
		str[0] = '0';
	len--;
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0';
		len--;
		nb /= 10;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*a;
// 	char	*b;
// 	char	*c;

// 	a = ft_itoa(0);
// 	b = ft_itoa(-2147483648);
// 	c = ft_itoa(12345);
// 	printf("%s %s %s\n", a, b, c);
// 	free(a);
// 	free(b);
// 	free(c);
// 	return (0);
// }