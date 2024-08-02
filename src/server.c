/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:26 by joseoliv          #+#    #+#             */
/*   Updated: 2024/08/02 16:30:57 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	fill_string(char c)
{
	static char		*result = NULL;
	char			*new_str;

	if (!result)
	{
		result = ft_calloc(2, sizeof(char));
		if (!result)
			return ;
		result[0] = c;
		return ;
	}
	new_str = ft_strjoin(result, c);
	if (!new_str)
		return ;
	free(result);
	result = new_str;
	if (c == 0)
	{
		ft_printf("%s", result);
		free(result);
		result = NULL;
	}
}

void	server_handler(int signum)
{
	static int	i = 7;
	static char	decimal_num = 0;

	if (signum == SIGUSR1)
		decimal_num += 1 << i;
	i--;
	if (i < 0)
	{
		fill_string(decimal_num);
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
