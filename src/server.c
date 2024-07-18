/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/18 08:17:49 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	server_handler(int signum)
{
	printf("cao");
}

int		main(void)
{
	struct sigaction 	sa;
	int					pid;
	
	sa.sa_handler = &server_handler;
	pid = getpid();
	ft_putnbr(pid);
	
	sigaction(SIGINT, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
}