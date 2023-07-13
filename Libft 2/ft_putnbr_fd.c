/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:31:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/07/13 03:41:16 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		c;

	if (fd < 0)
		return ;
	nb = n;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd((nb / 10), fd);
		c = nb % 10 + '0';
		write(fd, &c, 1);
	}
}

//#include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/deryacar/Desktop/test.txt",O_WRONLY);
// 	ft_putstr_fd("Merhaba ",fd);
// 	ft_putnbr_fd(42,fd);
// 	ft_putstr_fd(" Kocaeli",fd);
// }

// n parametresine girilen int değeri fd dosyasına yazar.
// // Belirtilen dosya tanımlayıcısına (fd) "n" parametresinden gelen
// int değer yazılır.