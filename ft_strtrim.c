/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:53:01 by htommy            #+#    #+#             */
/*   Updated: 2021/04/28 14:53:02 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strtrim_socr(int b, char const *s1, int a)
{
	int		c;
	char	*s;

	c = 0;
	if (b == -1)
	{
		s = ft_calloc(sizeof(char), 1);
		if (s == 0)
			return (0);
		return (s);
	}
	s = ft_calloc(sizeof(char), (b - a) + 2);
	if (s == 0)
		return (0);
	while (a <= b)
	{
		s[c] = s1[a];
		a++;
		c++;
	}
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;

	if (s1 == 0)
		return (0);
	a = 0;
	b = ft_strlen(s1);
	while ((s1[a] != '\0') && (ft_strchr(set, s1[a]) != 0))
		a++;
	while ((b >= 0) && (ft_strchr(set, s1[b]) != 0))
		b--;
	return (ft_strtrim_socr(b, s1, a));
}
