/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:49:28 by mbolmier          #+#    #+#             */
/*   Updated: 2024/03/01 12:09:24 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	ft_putnbr(int d, int i)
{
	if (d == -2147483648)
	{
		write(1, "-2147483648", 11);
		i += 11;
	}
	else if (d < 0)
	{
		i = ft_putchar('-', i);
		i = ft_putnbr(-d, i);
	}
	else if (d < 10)
		i = ft_putchar(d + 48, i);
	else
	{
		i = ft_putnbr(d / 10, i);
		i = ft_putchar((d % 10) + 48, i);
	}
	return(i);
}

int	ft_putunbr(unsigned int u, int i)
{
	if (u < 10)
		i = ft_putchar(u + 48, i);
	else
	{
		i = ft_putunbr(u / 10, i);
		i = ft_putchar((u % 10) + 48, i);
	}
	return (i);
}

int	ft_puthexa_l(unsigned int x, int i)
{
	if (x == 0)
		i = ft_putchar('0', i);
	else if (x >= 16)
	{
		i = ft_puthexa_l(x / 16, i);
		i = ft_puthexa_l(x % 16, i);
	}
	else
	{
		if (x <= 9)
			i = ft_putchar(x + 48, i);
		else
			i = ft_putchar(x + 'a' - 10, i);
	}
	return (i);
}

int	ft_puthexa_u(unsigned int x, int i)
{
	if (x == 0)
		i = ft_putchar('0', i);
	else if (x >= 16)
	{
		i = ft_puthexa_u(x / 16, i);
		i = ft_puthexa_u(x % 16, i);
	}
	else
	{
		if (x <= 9)
			i = ft_putchar(x + 48, i);
		else
			i = ft_putchar(x + 'A' - 10, i);
	}
	return (i);
}

int	ft_put_ptr(unsigned long x, int i)
{
	if (!x)
		i = ft_putstr("(nil)", i);
	else 
	{
		if (x < 16)
			i = ft_putstr("0x", i);
		if (x > 15)
			i = ft_put_ptr(x / 16, i);
		x = x % 16;
		if (x <= 9)
			i = ft_putchar(x + 48, i);
		else
			i = ft_putchar(x + 'a' - 10, i);
	}
	return (i);
}
