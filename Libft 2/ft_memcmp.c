/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:00 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*container1;
	unsigned const char	*container2;

	container1 = (unsigned char *)s1;
	container2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*container1 != *container2)
			return (*container1 - *container2);
		n--;
		container1++;
		container2++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char *s1 = "DERYACAR";
// 	char *s2 = "DERYACAR";

// 	printf("%d",ft_memcmp(s1,s2,9));
// }

// "s1" parametresi ile gösterilen bellek bölgesinin "n" parametre değeri
// kadar ilk byte'ını "s2" parametresi ile gösterilen bellek bölgesi ile
// karşılaştırır. Eğer her iki bellek bölgesindeki tüm değerler aynı 
// ise sıfır değeri, aksi takdirde sıfırdan farklı bir değer geri döndürür.

