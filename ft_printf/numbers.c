/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:49:28 by mbolmier          #+#    #+#             */
/*   Updated: 2024/03/01 13:57:50 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	ft_putnbr(int d, int *error)
{
	int	count;

	count = 0;
	if (d == -2147483648)
		return (ft_putstr("-2147483648", error));
	else if (d < 0 && !(*error))
	{
		count += ft_putchar('-', error);
		count += ft_putnbr(-d, error);
	}
	else if (d < 10 && !(*error))
		count += ft_putchar(d + 48, error);
	else if (!(*error))
	{
		count += ft_putnbr(d / 10, error);
		count += ft_putchar((d % 10) + 48, error);
	}
	return (count);
}

int	ft_putunbr(unsigned int u, int *error)
{
	int	count;

	count = 0;
	if (u < 10 && !(*error))
		count += ft_putchar(u + 48, error);
	else if (!(*error))
	{
		count += ft_putunbr(u / 10, error);
		count += ft_putchar((u % 10) + 48, error);
	}
	return (count);
}

int	ft_puthexa_l(unsigned int x, int *error)
{
	int	count;

	count = 0;
	if (x == 0 && !(*error))
		count += ft_putchar('0', error);
	else if (x >= 16 && !(*error))
	{
		count += ft_puthexa_l(x / 16, error);
		count += ft_puthexa_l(x % 16, error);
	}
	else if (!(*error))
	{
		if (x <= 9)
			count += ft_putchar(x + 48, error);
		else
			count += ft_putchar(x + 'a' - 10, error);
	}
	return (count);
}

int	ft_puthexa_u(unsigned int x, int *error)
{
	int	count;

	count = 0;
	if (x == 0 && !(*error))
		count += ft_putchar('0', error);
	else if (x >= 16 && !(*error))
	{
		count += ft_puthexa_u(x / 16, error);
		count += ft_puthexa_u(x % 16, error);
	}
	else if (!(*error))
	{
		if (x <= 9)
			count += ft_putchar(x + 48, error);
		else
			count += ft_putchar(x + 'A' - 10, error);
	}
	return (count);
}

int	ft_put_ptr(unsigned long x, int *error)
{
	int	count;

	count = 0;
	if (!x)
		count += ft_putstr("(nil)", error);
	else if (!(*error))
	{
		if (x < 16 && !(*error))
			count += ft_putstr("0x", error);
		if (x > 15 && !(*error))
			count += ft_put_ptr(x / 16, error);
		x = x % 16;
		if (x <= 9 && !(*error))
			count += ft_putchar(x + 48, error);
		else if (!(*error))
			count += ft_putchar(x + 'a' - 10, error);
	}
	return (count);
}
