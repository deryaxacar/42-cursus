/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:13 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

//#include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/deryacar/Desktop/test.txt",O_WRONLY);
// 	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
// }

// Belirtilen dosya tanımlayıcısına (fd) "s" parametresinden gelen
// char dizisi yazılır ve bir alt satıra geçer.