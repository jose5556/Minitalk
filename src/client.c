/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/18 11:54:33 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	client_handler(int pid, char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str && i < 7)
		{
			if (*str & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			*str >>= 1;
			i++;
		}
		str++;
		i = 0;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		client_handler(atoi(argv[1]), argv[2]);
	else
	{
		printf(" no no no ");
		return (1);
	}
}
