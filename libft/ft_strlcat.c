/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:58:48 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/29 17:07:05 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (len_dst >= size)
		return (len_src + size);
	size -= len_dst;
	while (dst[i])
		i++;
	while (src[j] && j < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

/*#include <stdio.h>
int main (void)
{
	char dst[] = "Salut";
	char src[] = " toi";
	printf("%zu", ft_strlcat(dst, src, 0));
	return (0);
}*/
