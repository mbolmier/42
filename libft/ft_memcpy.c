/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:40 by mbolmier          #+#    #+#             */
/*   Updated: 2023/12/05 18:25:57 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;

	ptr2 = (char *)src;
	ptr = (char *)dest;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (n--)
		ptr[n] = ptr2[n];
	return (dest);
}
