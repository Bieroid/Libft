/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:45:44 by htommy            #+#    #+#             */
/*   Updated: 2021/04/21 18:45:45 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t	a;
	char	*a1;
	char	*a2;

	a = 0;
	if (destination == 0 && source == 0)
		return (0);
	a1 = (char *)destination;
	a2 = (char *)source;
	while (a < n)
	{
		a1[a] = a2[a];
		a++;
	}
	return (a1);
}
