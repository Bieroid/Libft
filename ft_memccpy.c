/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:53:50 by htommy            #+#    #+#             */
/*   Updated: 2021/04/21 18:53:51 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	size_t	a;
	char	*a1;
	char	*a2;

	a = 0;
	if (destination == 0 && source == 0)
		return (0);
	a1 = (char *)destination;
	a2 = (char *)source;
	while ((a < n) && (a2[a] != (char)c))
	{
		a1[a] = a2[a];
		a++;
	}
	if (a2[a] == (char)c)
	{
		a1[a] = a2[a];
		return (a1 + a + 1);
	}
	return (0);
}
