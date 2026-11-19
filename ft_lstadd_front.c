/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:24:48 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:11:47 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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

// 	l = ft_lstnew(ft_strdup("two"));
// 	ft_lstadd_front(&l, ft_lstnew(ft_strdup("one")));
// 	printf("%s -> %s\n", (char *)l->content, (char *)l->next->content);
// 	ft_lstclear(&l, del);
// 	return (0);
// }
