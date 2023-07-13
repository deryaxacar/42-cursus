/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:42 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;

	clear = *lst;
	while (lst && *lst)
	{
		clear = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = clear;
	}
}

// #include <stdio.h>

// void    *del(void *content)
// {
//    free(content);
//     return 0;
// }

// int main(void)
// {
//     t_list *node1,*node2,*node3;
// 	node1 = (t_list *)malloc(sizeof(t_list));
//	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));

//	node1->content = ft_strdup("42Kocaeli");
// 	node2->content = ft_strdup("42Kocaeli");
// 	node3->content = ft_strdup("42Kocaeli");

// 	ft_lstadd_back(&node1,node2);
// 	ft_lstadd_back(&node1,node3);

// 	ft_lstclear(&node2,(void *)(*del));

// 	if(node2)
// 		printf("1\n");
// 	else
// 		printf("0\n");

// 	if(node1)
// 		printf("1\n");
// 	else
// 		printf("0\n");
// }

// lst struct yapısının bağlı olduğu tüm içerikleri ve yapıları temizler.
// lst struct'ına bağlı olan struct yapılarını temizlemez.
