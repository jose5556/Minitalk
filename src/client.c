/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/26 12:47:36 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	client_handler(int pid, char c)
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
		usleep(200);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	pid;

	i = 0;
	if (argc != 3)
	{
		ft_printf("no no no, write the PID, and then the message please!");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid == -1)
		return (1);
	while (argv[2][i])
	{
		client_handler(pid, argv[2][i]);		
		i++;
	}
	client_handler(pid, '\0');
	return (0);
}
