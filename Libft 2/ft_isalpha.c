/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:25 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

//#include <stdio.h>
//int main(){
//	printf("%d\n", ft_isalpha('a'));
//	printf("%d\n", ft_isalpha('1'));
//	printf("%d\n", ft_isalpha(' '));
//	printf("%d\n", ft_isalpha('!'));
//	return 0;
//}
// Parametreden gelen karakterin alfanumerik olup olmadığını kontrol eder. (1 veya 0 döndürür)
