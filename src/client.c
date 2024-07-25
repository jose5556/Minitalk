/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/25 09:27:39 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	client_handler(int pid, char *str)
{
	int		i;

	i = 7;
	while (*str)
	{
		while (i >= 0)
		{
			if ((*str >> i) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i--;
			str++;
		}
		str++;
		i = 7;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		client_handler(ft_atoi(argv[1]), argv[2]);
	else
	{
		ft_printf(" no no no ");
		return (1);
	}
}
