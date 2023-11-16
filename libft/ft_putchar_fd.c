/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:26:33 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 18:41:05 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	int	fd;
	char *str = "./test.txt";

	fd = open(str, O_RDWR | O_CREAT);
	printf("%d\n", fd);
	ft_putchar_fd('E', fd);
	return (0);
}*/
