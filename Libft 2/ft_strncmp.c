/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:42 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "42Merhaba";
// 	char s2[] = "42Kocaeli";
// 	printf("%d",ft_strncmp(s1,s2,2)); 
// }

// "s1" parametresi ve "s2" parametresi (iki string değeri)
// "n" değeri kadar karşılaştırılır.
// Aynı ise 0 değeri farklı ise 0'dan farklı bir değer girilir. 
// NUll karakter gördüğü zaman durur.
