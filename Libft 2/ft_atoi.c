/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:40:14 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	container;

	i = 0;
	sign = 1;
	container = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i])
	{
		if (!(ft_isdigit(nptr[i])))
			return (container * sign);
		else
			container = container * 10 + (const char ) nptr[i] - 48;
		i++;
	}
	return (container * sign);
}

//#include <stdio.h>
//int main(){
//	char *str= "42";
//	printf("%d\n", ft_atoi(str));
//	return 0;
//}
// Parametreden gelen stringin içindeki sayıları int e çevirir.
