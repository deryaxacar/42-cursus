/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:58 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char) c)
			return ((void *)str);
		n--;
		str++;
	}
	return (NULL);
}

//#include <stdio.h>

//int main()
//{
//	char *s = "42Kocaeli";
//	printf("%s", (char *)ft_memchr(s,'a',6));
// }

// "s" parametresi ile gösterilen bellek bölgesinin "n" parametre değeri kadar
// ilk byte'ında "c" parametresi ile gösterilen değerin (unsigned char olarak
// değerlendirilir) ilk geçtiği yeri arar ve bu bellek adresini gösteren
// bir işaretçi geri döndürür.
