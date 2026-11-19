/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:15:56 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:51:05 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// static void	del(void *p)
// {
// 	free(p);
// }
// int main(void)
// {
// 	t_list	*n;

// 	n = ft_lstnew(ft_strdup("one"));
// 	printf("%s %p\n", (char *)n->content, (void *)n->next);
// 	ft_lstdelone(n, del);
// 	return (0);
// }
