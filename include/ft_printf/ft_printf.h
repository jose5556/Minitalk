/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:16:23 by joseoliv          #+#    #+#             */
/*   Updated: 2024/05/09 18:41:02 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *str, ...);
int		ft_putnbr_hexa(unsigned long long n, char upper);
int		ft_putchar(char c);
int		ft_putnbr(int n);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_putstr(char *s);
int		call_funcs(va_list args, char c);
int		count(long long n, int base);
int		ft_putptr_hexa(unsigned long long n);
int		ft_unsigned_putnbr(unsigned int n);
int		count_unsigned(unsigned long long n);

#endif