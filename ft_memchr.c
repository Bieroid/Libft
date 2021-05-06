/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:18:11 by htommy            #+#    #+#             */
/*   Updated: 2021/04/27 18:18:12 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			a;
	unsigned char	*s;

	a = 0;
	s = (unsigned char *)arr;
	while (a < n)
	{
		if (s[a] == (unsigned char)c)
			return (s + a);
		a++;
	}
	return (0);
}
