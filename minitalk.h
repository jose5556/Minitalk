/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:08:10 by joseoliv          #+#    #+#             */
/*   Updated: 2024/08/01 14:46:01 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include "./include/ft_printf/ft_printf.h"
# include "./include/libft/libft.h"

void	client_handler(int pid, char c);
void	server_handler(int signum);
void	fill_string(char c);

#endif