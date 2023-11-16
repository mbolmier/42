/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:12:55 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 19:55:29 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	size_t	len;
	size_t	i;

	len = nmemb * size;
	if (len > 2147483647)
		return (0);
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

/*#include <stdio.h>
int	main(void)
{
	printf("%s", (char *)ft_calloc(10, 1));
	return (0);
}*/
