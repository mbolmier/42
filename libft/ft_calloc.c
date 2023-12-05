/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:12:55 by mbolmier          #+#    #+#             */
/*   Updated: 2023/12/05 18:22:36 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	size_t	len;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	len = nmemb * size;
	if (len / size != nmemb)
		return (NULL);
	arr = malloc (size * nmemb);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = '\0';
		i++;
	}
	return (arr);
}
