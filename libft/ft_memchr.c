/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:37:53 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 15:34:30 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i++] == (unsigned char)c)
			return (&(ptr[i - 1]));
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char *str = "salsa";
	printf("%s", (char *)ft_memchr(str, 'a', 12));
	return (0);
}*/
