/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:19 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pntr;

	pntr = malloc(size * nmemb);
	if (!(pntr))
		return (NULL);
	ft_bzero(pntr, (nmemb * size));
	return (pntr);
}

//#include <stdio.h>
//int main(){
//	char *str = ft_calloc(2, 2);
//	printf("%s\n", str);
//	return 0;
//}
// Parametreden gelen size kadar bellek ayırır ve 0 a eşitler. (malloc ve bzero kullanır)