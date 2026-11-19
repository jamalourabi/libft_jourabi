/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:47:45 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:17:37 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>
// static void	del(void *p)
// {
// 	free(p);
// }
// static void	*dup_content(void *c)
// {
// 	return (ft_strjoin((char *)c, "!"));
// }

// int main(void)
// {
// 	t_list	*l;
// 	t_list	*m;

// 	l = ft_lstnew(ft_strdup("a"));
// 	ft_lstadd_back(&l, ft_lstnew(ft_strdup("b")));
// 	m = ft_lstmap(l, dup_content, del);
// 	printf("%s %s\n", (char *)m->content, (char *)m->next->content);
// 	ft_lstclear(&l, del);
// 	ft_lstclear(&m, del);
// 	return (0);
// }
