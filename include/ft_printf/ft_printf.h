/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:16:23 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/25 06:56:55 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

int		ft_printf(char const *str, ...);
int		ft_putnbr_hexa(unsigned long long n, char upper);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		call_funcs(va_list args, char c);
int		count(long long n, int base);
int		ft_putptr_hexa(unsigned long long n);
int		ft_unsigned_putnbr(unsigned int n);
int		count_unsigned(unsigned long long n);

#endif