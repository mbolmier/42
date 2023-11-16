/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:36:11 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 13:36:21 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr;
	char	*ptr2;
	int		result;

	result = 0;
	ptr2 = (char *)s1;
	ptr = (char *)s2;
	while (n--)
	{
		if (ptr[n] != ptr2[n])
			result = ptr[n] - ptr2[n];
	}
	return (result);
}

/*#include <stdio.h>
int main(void)
{
	char *s1 = "Salut";
	char *s2 = "Salut";
	printf("%d\n", ft_memcmp(s1, s2, 5));
	return (0); 
}*/
