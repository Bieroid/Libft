/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:29:54 by htommy            #+#    #+#             */
/*   Updated: 2021/04/21 14:30:04 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	dl;

	a = 0;
	dl = ft_strlen(dst);
	if ((dl > size) || (size == 0))
		return (ft_strlen(src) + size);
	b = dl;
	while ((b < size - 1) && (src[a] != '\0'))
	{
		dst[b] = src[a];
		b++;
		a++;
	}
	dst[b] = '\0';
	return (ft_strlen(src) + dl);
}
