/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:42:42 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:50:21 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// static void	del(void *p)
// {
// 	free(p);
// }
// static void	print(void *c)
// {
// 	printf("%s\n", (char *)c);
// }

// int main(void)
// {
// 	t_list	*l;

// 	l = ft_lstnew(ft_strdup("a"));
// 	ft_lstadd_back(&l, ft_lstnew(ft_strdup("b")));
// 	ft_lstiter(l, print);
// 	ft_lstclear(&l, del);
// 	return (0);
// }
