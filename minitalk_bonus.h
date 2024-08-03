/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:33:37 by joseoliv          #+#    #+#             */
/*   Updated: 2024/08/02 18:06:29 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include "./include/ft_printf/ft_printf.h"
# include "./include/libft/libft.h"

void	server_handler(int signum, siginfo_t *info, void *ucontext);
void	client_sender(int pid, char c);
void	fill_string(char c);

#endif