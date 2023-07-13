/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:08 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}

// #include <stdio.h>

// int	main(){

// 	char dizi[] = "deryacar";
// 	printf("%s",(char *)ft_memset(dizi,'c',3));

//     return 0;
// }

// "c" parametresi ile gösterilen bellek bölgesindeki karakteri dest
// parametresindeki bellek bölgesinin ilk "n" parametre değeri kadar byte'ına
// kopyalar.