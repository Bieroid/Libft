/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:38:03 by htommy            #+#    #+#             */
/*   Updated: 2021/04/27 21:38:04 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_socr1(size_t len, char const *s, unsigned int start)
{
	size_t	a;
	char	*sub;

	a = 0;
	sub = ft_calloc(sizeof(char), len + 1);
	if (sub == 0)
		return (0);
	while (a < len)
	{
		sub[a] = s[start];
		a++;
		start++;
	}
	return (sub);
}

char 	*ft_socr2(size_t a, unsigned int start, char const *s)
{
	char	*sub;

	sub = ft_calloc(sizeof(char), (a - start) + 1);
	if (sub == 0)
		return (0);
	a = 0;
	while (s[start] != '\0')
	{
		sub[a] = s[start];
		a++;
		start++;
	}
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*sub;

	if (s == 0)
		return (0);
	a = ft_strlen(s);
	if (start > a)
	{
		sub = ft_calloc(sizeof(char), 1);
		if (sub == 0)
			return (0);
		return (sub);
	}
	if (a - start > len)
		sub = ft_socr1(len, s, start);
	else
		sub = ft_socr2(a, start, s);
	return (sub);
}
