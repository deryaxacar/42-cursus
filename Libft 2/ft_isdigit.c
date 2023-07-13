/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:30 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

//#include <stdio.h>
//int main(){
//	printf("%d\n", ft_isdigit('a'));
//	printf("%d\n", ft_isdigit('1'));
//	printf("%d\n", ft_isdigit(' '));
//	printf("%d\n", ft_isdigit('!'));
//	return 0;
//}
// Parametreden gelen karakterin sayı olup olmadığını kontrol eder. (1 veya 0 döndürür)
