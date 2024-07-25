/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/25 11:00:22 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	server_handler(int signum)
{
	static int i = 0;
	static char chr = 0;

	if (signum == SIGUSR1)
	{
		chr = (chr >> i) | 1;
	}
	else if (signum == SIGUSR2)
	{
		chr = (chr >> i) & 1;
	}
	ft_printf("%c", chr);
}

int	main(void)
{
	struct sigaction	sa;
	int					pid;

	sa.sa_handler = &server_handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	pid = getpid();
	ft_printf("Processor ID is: %d\n", pid);
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		exit(1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		exit(1);
	while (1)
	{
		pause();
	}
	return (0);
}