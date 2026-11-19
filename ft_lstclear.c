/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:34:59 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:12:41 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*(lst) = temp;
	}
	*lst = NULL;
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
// 	t_list	*l;

// 	l = ft_lstnew(ft_strdup("a"));
// 	ft_lstadd_back(&l, ft_lstnew(ft_strdup("b")));
// 	ft_lstclear(&l, del);
// 	printf("%p\n", (void *)l);
// 	return (0);
// }
