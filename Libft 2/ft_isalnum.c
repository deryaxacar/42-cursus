/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:22 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

//#include <stdio.h>
//int main(){
//	printf("%d\n", ft_isalnum('a'));
//	printf("%d\n", ft_isalnum('1'));
//	printf("%d\n", ft_isalnum(' '));
//	printf("%d\n", ft_isalnum('!'));
//	return 0;
//}
// Parametreden gelen karakterin alfanumerik olup olmadığını kontrol eder. (1 veya 0 döndürür)
