/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <htommy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:01:23 by htommy            #+#    #+#             */
/*   Updated: 2021/05/06 19:57:55 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if ((little[0] == '\0') || (big == little))
		return ((char *)big);
	while ((big[a] != '\0') && (a < len))
	{
		b = 0;
		if (big[a] == little[b])
		{
			while ((little[b] != '\0') && (big[a + b] != '\0') && (a + b
					< len) && (big[a + b] == little[b]))
			{
				if (little[b + 1] == '\0')
					return ((char *)&big[a]);
				b++;
			}
		}
		a++;
	}
	return (0);
}
