/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:53:41 by mbolmier          #+#    #+#             */
/*   Updated: 2024/02/29 20:24:58 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c, int i);
int	ft_putstr(char *str, int i);
int	ft_putnbr(int d, int i);
int	ft_putunbr(unsigned int u, int i);
int	ft_puthexa_l(unsigned int x, int i);
int	ft_puthexa_u(unsigned int x, int i);
int	ft_put_ptr(unsigned int x, int i);

#endif
