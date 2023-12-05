/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:12:41 by mbolmier          #+#    #+#             */
/*   Updated: 2023/12/05 18:27:08 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;
	size_t	i;

	i = 0;
	ptr2 = (char *)src;
	ptr = (char *)dest;
	if (dest == NULL && src == NULL)
		return (ptr);
	if (src < dest)
		while (n--)
			ptr[n] = ptr2[n];
	else
	{
		while (i < n)
		{
			ptr[i] = ptr2[i];
			i++;
		}
	}
	return (ptr);
}
