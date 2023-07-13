/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 02:24:35 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

// #include <stdio.h>

// int main()
// {
//     t_list *node1,*node2;

//     node1 = ft_lstnew("42");
//     node2 = ft_lstnew(" Kocaeli");

//     ft_lstadd_back(&node1,node2);
//     printf("%s",(char *)node1->content);
//     printf("%s",(char *)node1->next->content);
// }

// lst structının bağlı olduğu listelerin sonuna gider ve new sructını ekler.