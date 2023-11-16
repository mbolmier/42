/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:12:00 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 18:41:51 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 10 && n >= 0)
	{
		n += 48;
		write(fd, &n, 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		i = n % 10 + 48;
		write(fd, &i, 1);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(-2147483648);
	return (0);
}*/