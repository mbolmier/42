/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:24:09 by mbolmier          #+#    #+#             */
/*   Updated: 2024/03/01 20:40:59 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>  // for real printf
#include <stddef.h>

static int	ft_percent(int j, const char *format, va_list args, int *error)
{
	if (format[j] == 'c')
		return (ft_putchar(va_arg(args, int), error));
	if (format[j] == 's')
		return (ft_putstr(va_arg(args, char *), error));
	if (format[j] == 'd' || format[j] == 'i')
		return (ft_putnbr(va_arg(args, int), error));
	if (format[j] == 'u')
		return (ft_putunbr(va_arg(args, unsigned long int), error));
	if (format[j] == 'x')
		return (ft_puthexa_l(va_arg(args, unsigned int), error));
	if (format[j] == 'X')
		return (ft_puthexa_u(va_arg(args, unsigned int), error));
	if (format[j] == 'p')
		return (ft_put_ptr(va_arg(args, unsigned long), error));
	if (format[j] == '%')
		return (ft_putchar('%', error));
	else if (format[j] == '\0')
		*error = -1;
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		error;
	int		j;

	count = 0;
	error = 0;
	j = 0;
	va_start(args, format);
	while (format[j] && !error)
	{
		if (format[j] == '%')
			count += ft_percent(++j, format, args, &error);
		else
		{
			count++;
			ft_putchar(format[j], &error);
		}
		j++;
	}
	va_end(args);
	if (error)
		return (-1);
	return (count);
}
