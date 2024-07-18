/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/09 19:42:27 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <stdio.h>

void	handler(int signum)
{
	printf("cao");
}

int		main(void)
{
	struct sigaction 	sa;
	int					pid;
	
	sa.sa_handler = &handler;
	pid = getpid();
	ft_putnbr(pid);
	
	sigaction(SIGINT, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
}