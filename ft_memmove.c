/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:12:42 by htommy            #+#    #+#             */
/*   Updated: 2021/04/27 18:07:51 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	size_t		a;
	char		*dest;
	const char	*src;

	a = -1;
	if ((destination == 0) && (source == 0))
		return (0);
	dest = (char *)destination;
	src = (char *)source;
	if (n == 0)
		return (dest);
	if (dest > src)
	{
		while (++a < n)
			dest[n - a - 1] = src[n - a - 1];
	}
	else
	{
		while (++a < n)
			dest[a] = src[a];
	}
	return (dest);
}
