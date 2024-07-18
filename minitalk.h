/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:08:10 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/18 12:31:07 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <stdio.h>
/* # include "./include/ft_printf/ft_printf.h"
# include "./include/libft/libft.h" */

void	client_handler(int pid, char *str);
void	server_handler(int signum);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
#endif