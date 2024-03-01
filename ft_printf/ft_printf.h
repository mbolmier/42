/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:53:41 by mbolmier          #+#    #+#             */
/*   Updated: 2024/03/01 13:19:35 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c, int *error);
int	ft_putstr(char *str, int *error);
int	ft_putnbr(int d, int *error);
int	ft_putunbr(unsigned int u, int *error);
int	ft_puthexa_l(unsigned int x, int *error);
int	ft_puthexa_u(unsigned int x, int *error);
int	ft_put_ptr(unsigned long x, int *error);

#endif
