/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:56:08 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:17:06 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// static void	del(void *p)
// {
// 	free(p);
// }
// int main(void)
// {
// 	t_list	*l;

// 	l = ft_lstnew(ft_strdup("a"));
// 	ft_lstadd_back(&l, ft_lstnew(ft_strdup("b")));
// 	printf("%s\n", (char *)ft_lstlast(l)->content);
// 	ft_lstclear(&l, del);
// 	return (0);
// }
