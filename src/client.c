/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/09 19:42:24 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <stdio.h>

void	client_handler(int pid, char *str)
{
	int		i;

	i = 9;
	while (*str)
	{
		while(*str && i)
		{
			if (*str | 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			*str == *str << 1;
			i--;
		}
		i = 9;
		str++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		client_handler(ft_atoi(argv[1]), argv[2]);
	else
	{
		printf(" no no no ");
		return (1);
	}
}