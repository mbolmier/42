/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:24:09 by mbolmier          #+#    #+#             */
/*   Updated: 2023/12/23 11:49:10 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // for malloc, free
#include <unistd.h> // for write
#include <stdarg.h> // for va
#include <stdio.h>  // for real printf

int	ft_putchar(int c, int i)
{
	write(1, &c, 1);
	return (i + 1);
}

int	ft_putstr(char *str, int i)
{
	if (!str)
		i = ft_putstr("(null)", i);
	else
	{
		while (*str)
		{
			write(1, &(*str), 1);
			str++;
			i++;
		}
	}
	return (i);
}

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
	else if (d > 0 && d < 10)
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
	if (u > 0 && u < 10)
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

int	ft_percent(int i, int j, const char *format, va_list args)
{
	if (format[j] == 'c')
		i = ft_putchar(va_arg(args, int), i);
	if (format[j] == 's')
		i = ft_putstr(va_arg(args, char *), i);
	if (format[j] == 'd' || format[j] == 'i')
		i = ft_putnbr(va_arg(args, int), i);
	if (format[j] == 'u')
		i = ft_putunbr(va_arg(args, unsigned int), i);
	if (format[j] == 'x')
		i = ft_puthexa_l(va_arg(args, unsigned long), i);
	if (format[j] == 'X')
		i = ft_puthexa_u(va_arg(args, unsigned long), i);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	i;
	int	j;

	i = 0;
	j = 0;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%')
			i = ft_percent(i, ++j, format, args);
		else
		{
			i++;
			write(1, &format[j], 1);
		}
		j++;
	}
	va_end(args);
	return (i);
}

int	main(void)
{
	int i;

	i = ft_printf("me    ->  hello 42!\n%x", -1);
	printf("\n");
	printf("i: %i\n\n", i);
	i = printf("real    ->  hello 42!\n%x", -1);
	printf("\n");
	printf("i: %i\n\n", i);

	return (0);
}
