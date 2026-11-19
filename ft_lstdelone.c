/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:26:02 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 16:13:18 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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

// 	n = ft_lstnew(ft_strdup("bye"));
// 	ft_lstdelone(n, del);
// 	printf("deleted\n");
// 	return (0);
// }
