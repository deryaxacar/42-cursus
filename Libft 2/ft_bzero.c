/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:16 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*arr;

	arr = (char *)s;
	while (n > 0)
	{
		*arr = 0;
		arr++;
		n--;
	}
}

//#include <stdio.h>
//int main(){
//	char *str = "42";
//	ft_bzero(str, 2);
//	printf("%s\n", str);
//	return 0;
//}
// Parametreden gelen stringin ilk n karakterini 0 a eşitler. 