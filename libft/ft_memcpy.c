/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:40 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/16 19:07:30 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;

	ptr2 = (char *)src;
	ptr = (char *)dest;
	if (src == NULL && dest == NULL)
		return (dest);
	while (n--)
		ptr[n] = ptr2[n];
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char *dest;
	char *src = "sALUT TOI";

	printf("%s\n", (char *)ft_memcpy(dest, src, 10));
	return (0);
}*/
