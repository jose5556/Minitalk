/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:18:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/04 20:19:11 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	client_handler(int pid, char *str)
{
	char	*binary_char;
	int		nine;

	nine = 9;
	binary_char = calloc(9, sizeof(char));
	while (nine)
	{
		
	}
	
	while (str)
	{
		int i;
		
		i = 0;
		
	}
}

int		main_client(int argc, char *argv[])
{
	if (argc == 3)
		client_handler(argv[1], argv[2]);
	else
	{
		printf(" no no no ");
		return (1);
	}
}