/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:32 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	leng;
	size_t	counter;

	counter = 0;
	leng = ft_strlen(dest);
	if (size - 1 > leng && size > 0)
	{
		while (src[counter] != '\0' && size - 1 > leng + counter)
		{
			dest[counter + leng] = src[counter];
			counter++;
		}
		dest[leng + counter] = 0;
	}
	if (leng >= size)
		leng = size;
	return (leng + ft_strlen(src));
}

// #include <stdio.h>

// int main()
// {
// 	char *dest = "Merhaba";
// 	char *src = "42Kocaeli";

// 	printf("%zu",ft_strlcat(dest,src,5));
// }

// dst dizisinin son karakteri null'dan sonra 
// src dizisini ekliyor. dst'den n kadar ilerler.

// "src" parametresinden gelen karakter dizisini "dst" parametresinden gelen
// diziye ekliyor."n" parametresi ise "dst" dizisinin maksimum boyutunu belirler.
