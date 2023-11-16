/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:58:48 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 15:35:47 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	while (src[j] && j < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

/*#include <stdio.h>
int main (void)
{
	char dst[] = "Salut";
	char src[] = " toi";
	printf("%zu", ft_strlcat(dst, src, 0));
	return (0);
}*/
