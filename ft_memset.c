/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:08:13 by htommy            #+#    #+#             */
/*   Updated: 2021/04/21 18:08:14 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t	a;
	char	*s;

	a = 0;
	s = (char *)destination;
	while (a < n)
	{
		s[a] = (char)c;
		a++;
	}
	return (s);
}
