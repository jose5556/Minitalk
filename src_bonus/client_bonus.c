/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:32:27 by joseoliv          #+#    #+#             */
/*   Updated: 2024/08/03 17:48:19 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk_bonus.h"

void	client_sender(int pid, char c)
{
	int		i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(150);
	}
}

void	client_handler(int signum)
{
	if (signum == SIGUSR1)
	{
		ft_printf("<------Message sent------>\n");
		exit(0);
	}
	else
		return ;
}

int	main(int argc, char *argv[])
{
	int					i;
	int					pid;
	struct sigaction	sa;

	if (argc != 3)
	{
		ft_printf("no no no, write the PID, and then the message please!\n");
		return (1);
	}
	sa.sa_handler = &client_handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	pid = ft_atoi(argv[1]);
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		exit(1);
	if (pid == -1)
		return (1);
	i = 0;
	while (argv[2][i])
	{
		client_sender(pid, argv[2][i]);
		i++;
	}
	client_sender(pid, '\0');
}
