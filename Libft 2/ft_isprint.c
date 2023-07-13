/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:32 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

//#include <stdio.h>
//int main(){
//	printf("%d\n", ft_isprint('a'));
//	printf("%d\n", ft_isprint('1'));
//	printf("%d\n", ft_isprint(' '));
//	printf("%d\n", ft_isprint('!'));
//	return 0;
//}
// Parametreden gelen karakterin yazdırılabilir olup olmadığını kontrol eder. (1 veya 0 döndürür)