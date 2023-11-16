/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:42:03 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/14 15:42:58 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
		ptr[n] = (char)c;
	return (s);
}

/*#include <stdio.h>
int    main(void)
{
	char	*s;

	printf("%s\n", (char *)ft_memset(s, 51, 1));
	return (0);
}*/