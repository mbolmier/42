/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:58:49 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/15 13:36:48 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
		ptr[n] = '\0';
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "Salut";
	char *ptr;

	ptr = str;
	ft_bzero(ptr, 4);
	printf("%s\n", str);
	return (0);
}*/
