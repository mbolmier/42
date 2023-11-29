/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:12:56 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/29 16:49:24 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*number;
	size_t		len;
	int long	nb;

	nb = n;
	len = number_len(nb);
	number = malloc(sizeof(char) * (len + 1));
	if (number == NULL)
		return (NULL);
	number[len--] = '\0';
	if (nb == 0)
		number[len] = '0';
	if (nb < 0)
	{
		number[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		number[len--] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (number);
}
