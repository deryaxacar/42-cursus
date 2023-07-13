/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:06 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer1;
	unsigned char	*buffer2;
	size_t			counter;

	if (!dest && !src)
		return (NULL);
	buffer1 = (unsigned char *)dest;
	buffer2 = (unsigned char *)src;
	counter = 0;
	if (buffer1 > buffer2)
	{
		while (n-- > 0)
			buffer1[n] = buffer2[n];
	}
	else
	{
		while (n > counter)
		{
			buffer1[counter] = buffer2[counter];
			counter++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "kocaeli";

// 	printf("%s",(char *)ft_memmove(str+2,str,3));
// }

// Memcopy ile aynı işlevi yapar fakat 
// bellekte overlop olmaması için tersten kopyalar.
