/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:06:57 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/14 12:35:03 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		comp;

	i = 0;
	if (n == 0)
		return (0);
	comp = (unsigned char)s1[0] - (unsigned char)s2[0];
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		comp = (unsigned char)s1[i + 1] - (unsigned char)s2[i + 1];
		i++;
	}
	return (comp);
}
