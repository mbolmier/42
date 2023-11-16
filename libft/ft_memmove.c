/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:12:41 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 15:35:14 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;
	size_t	i;

	i = 0;
	ptr2 = (char *)src;
	ptr = (char *)dest;
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
	return (&ptr[0]);
}

/*#include <stdio.h>
int main(void)
{
	char	*dest;
	char	*src = "Salut";
	ft_memmove(dest, src, 6);
	printf("%s\n", dest);
	return (0);
}*/
