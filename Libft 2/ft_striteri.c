/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:27 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// #include <stdio.h>

// void ft_42(unsigned int a,char *c)
// {
// 	*c = ft_toupper(*c);
// }
// #include <stdio.h>

// int main()
// {
// 	char str[] = "Merhaba42";
// 	printf("%s\n", str);
// 	ft_striteri(str, ft_42);
// 	printf("%s\n", str);
// }

// "s" parametresinden gelen karakter dizisinin her karakterine
// (f) fonksiyonu uygulanir.