/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:34:14 by joseoliv          #+#    #+#             */
/*   Updated: 2024/08/01 13:56:04 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const s2)
{
	char	*result;
	int		len;

	if (!s1 && !s2)
		ft_strdup("");
	len = ft_strlen(s1);
	result = (char *) ft_calloc(len + 2, 1);
	if (result == NULL)
		return (result);
	ft_strlcpy(result, s1, len + 1);
	result[len] = s2;
	return (result);
}
