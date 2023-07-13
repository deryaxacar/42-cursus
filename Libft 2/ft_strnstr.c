/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:45 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;       // İlk dizinin indeksi
	size_t j;       // İkinci dizinin indeksi
	size_t s2_len;  // İkinci dizinin uzunluğu

	i = 0;
	s2_len = ft_strlen(needle);

	// İkinci dizi boş ise, ilk dizinin başlangıcını döndür
	if (!s2_len)
		return ((char *)haystack);

	// len sıfırdan farklı ise devam et
	if (len != 0)
	{
		while (haystack[i] && i <= len - s2_len)
		{
			j = 0;
			while (needle[j] && needle[j] == haystack[i + j])
				j++;

			// İkinci dizi tamamen bulunmuşsa, başlangıç adresini döndür
			if (j == s2_len)
				return ((char *)&haystack[i]);

			i++;
		}
	}

	// Eşleşme bulunamadı, NULL döndür
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char hstack[] = "Merhaba42Kocaeli";
// 	char needle[] = "42";

// 	printf("%s",ft_strnstr(hstack,needle,10));
// }

// "needle(iğne)" yi "haystack(samanlık)" da "len" kadar arar.
// bulduğu zaman devamını da döndürür.
