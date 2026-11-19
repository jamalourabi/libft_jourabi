/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jourabi <jourabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:49:04 by jourabi           #+#    #+#             */
/*   Updated: 2026/11/19 15:51:24 by jourabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	size_t	i;

	temp = lst;
	i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
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

// 	l = NULL;
// 	ft_lstadd_back(&l, ft_lstnew(ft_strdup("a")));
// 	ft_lstadd_back(&l, ft_lstnew(ft_strdup("b")));
// 	printf("%d\n", ft_lstsize(l));
// 	ft_lstclear(&l, del);
// 	return (0);
// }
