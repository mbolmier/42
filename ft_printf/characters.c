/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:53:10 by mbolmier          #+#    #+#             */
/*   Updated: 2024/02/29 20:25:19 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
