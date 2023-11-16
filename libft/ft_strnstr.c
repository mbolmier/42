/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:13:41 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 20:03:12 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[0]);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strnstr("aaxx", "xx", 4));
	return (0);
}*/
