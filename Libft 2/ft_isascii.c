/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:27 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

//#include <stdio.h>
//int main(){
//	printf("%d\n", ft_isascii('a'));
//	printf("%d\n", ft_isascii('1'));
//	printf("%d\n", ft_isascii(' '));
//	printf("%d\n", ft_isascii('!'));
//	return 0;
//}
// Parametreden gelen karakterin ascii olup olmadığını kontrol eder. (1 veya 0 döndürür)
