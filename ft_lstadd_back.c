/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:11:03 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:11:18 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
}

// #include <stdio.h>
// static void	del(void *p)
// {
// 	free(p);
// }
// int main(void)
// {
// 	t_list	*l;

// 	l = NULL;
// 	ft_lstadd_back(&l, ft_lstnew(ft_strdup("a")));
// 	ft_lstadd_back(&l, ft_lstnew(ft_strdup("b")));
// 	printf("%s -> %s\n", (char *)l->content, (char *)l->next->content);
// 	ft_lstclear(&l, del);
// 	return (0);
// }
