/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:24:10 by htommy            #+#    #+#             */
/*   Updated: 2021/04/27 18:24:11 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t			a;
	unsigned char	*s;
	unsigned char	*d;

	a = 0;
	s = (unsigned char *)arr1;
	d = (unsigned char *)arr2;
	while (a < n)
	{
		if (s[a] == d[a])
			a++;
		else
			return (s[a] - d[a]);
	}
	return (0);
}
