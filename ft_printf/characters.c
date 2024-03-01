/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:53:10 by mbolmier          #+#    #+#             */
/*   Updated: 2024/03/01 13:41:42 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c, int *error)
{
	if (write(1, &c, 1) == -1)
		*error = 1;
	return (1);
}

int	ft_putstr(char *str, int *error)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)", error));
	else
	{
		while (str[i] && !(*error))
		{
			ft_putchar(str[i], error);
			i++;
		}
	}
	return (i);
}
