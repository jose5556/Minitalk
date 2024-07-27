/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/27 18:02:26 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

char	*g_final_word;

void	server_handler(int signum)
{
	static int	i = 7;
	static char	decimal_num = 0;

	if (!g_final_word)
		g_final_word = ft_calloc(1, 1);
	if (signum == SIGUSR1)
	{
		decimal_num += 1 << i;
		i--;
	}
	else if (signum == SIGUSR2)
		i--;
	else
		return ;
	if (i < 0)
	{
		if (decimal_num == 0)
		{
			ft_printf("%s", g_final_word);
			return ;
		}
		g_final_word = ft_strjoin(g_final_word, decimal_num);
		i = 7;
		decimal_num = 0;
	}
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
