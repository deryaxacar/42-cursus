/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:02 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c1;
	size_t	c2;

	c1 = 0;
	c2 = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		((unsigned char *)dest)[c1++] = ((char *)src)[c2++];
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char str[10] = "deryacar";
// 	char dst[10];
// 	// printf("%s",(char *)ft_memcpy(str+2,str,4)); //(overlap durumu vardır.)
	
// 	ft_memcpy(dst,str,7);
// 	printf("%s",dst);
// }

// "src" parametresi ile gösterilen bellek bölgesindeki karakterleri,
// "n" parametre değeri kadar uzunlukta, "dst" parametresindeki
// bellek bölgesine kopyalar.

// Sadece 33. ve 35. satırları 
	