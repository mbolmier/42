/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:24:09 by mbolmier          #+#    #+#             */
/*   Updated: 2024/03/01 12:09:43 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>  // for real printf

static int	ft_percent(int i, int j, const char *format, va_list args)
{
	if (format[j] == 'c')
		i = ft_putchar(va_arg(args, int), i);
	if (format[j] == 's')
		i = ft_putstr(va_arg(args, char *), i);
	if (format[j] == 'd' || format[j] == 'i')
		i = ft_putnbr(va_arg(args, int), i);
	if (format[j] == 'u')
		i = ft_putunbr(va_arg(args, unsigned long int), i);
	if (format[j] == 'x')
		i = ft_puthexa_l(va_arg(args, unsigned int), i);
	if (format[j] == 'X')
		i = ft_puthexa_u(va_arg(args, unsigned int), i);
	if (format[j] == 'p')
		i = ft_put_ptr(va_arg(args, unsigned long), i);
	if (format[j] == '%')
	{
		write(1, "%", 1);
		i += 1;
	}
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
/*
int    main(void)
{
    ft_printf("%d\n", ft_printf("%p\n", -4294967295));
    //printf("%d\n", printf("%ld\n", 4294967295));
    return (0);
}*/
