/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:45:19 by joseoliv          #+#    #+#             */
/*   Updated: 2024/07/25 09:18:27 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int main(void)
{
	char num = 'a';
	int i = 7; //01100001
	while (i >= 0)
	{
		ft_printf("%d", (num >> i) & 1);
		i--;
	}
	ft_printf("\n");
}
