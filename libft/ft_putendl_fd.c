/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:33:39 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 18:41:29 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write (fd, &s[i++], 1);
	write(fd, "\n", 1);
}

/*int	main(void)
{
	int fd;
	char *str = "./test.txt";

	fd = open(str, O_RDWR | O_CREAT);
	ft_putendl_fd("salut", fd);
	return (0);
}*/
