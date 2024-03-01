/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:53:41 by mbolmier          #+#    #+#             */
/*   Updated: 2024/03/01 12:00:08 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c, int i);
int	ft_putstr(char *str, int i);
int	ft_putnbr(int d, int i);
int	ft_putunbr(unsigned int u, int i);
int	ft_puthexa_l(unsigned int x, int i);
int	ft_puthexa_u(unsigned int x, int i);
int	ft_put_ptr(unsigned long x, int i);

#endif
