/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:32:46 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:07:20 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			bytes;
	void			*ptr;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	*arr;

// 	arr = ft_calloc(5, sizeof(int));
// 	if (!arr)
// 		return (1);
// 	printf("%d %d %d\n", arr[0], arr[2], arr[4]);
// 	free(arr);
// 	return (0);
// }