/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:35:58 by mbolmier          #+#    #+#             */
/*   Updated: 2023/12/05 18:10:29 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*str;

	size = ft_strlen(s);
	if (start > size || len == 0)
		size = 0;
	else if (len + start <= size)
		size = len;
	else
		size = ft_strlen(s) - start;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	size = 0;
	while (s[i])
	{
		if (i >= start && size < len)
			str[size++] = s[i];
		i++;
	}
	str[size] = '\0';
	return (str);
}
