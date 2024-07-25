/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/25 09:33:42 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	server_handler(int signum)
{
	if (signum == SIGUSR1)
	{
		ft_printf("1");
	}
	else if (signum == SIGUSR2)
	{
		ft_printf("0");
	}
}

int	main(void)
{
	struct sigaction	sa;
	int					pid;

	sa.sa_handler = &server_handler;
	sigemptyset(&sa.sa_mask);
	pid = getpid();
	ft_printf("%d\n", pid);
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