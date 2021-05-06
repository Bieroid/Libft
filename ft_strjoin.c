/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:28:14 by htommy            #+#    #+#             */
/*   Updated: 2021/04/28 14:28:15 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	int		c;
	char	*s;

	if ((s1 == 0) || (s2 == 0))
		return (0);
	c = -1;
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	s = ft_calloc(sizeof(char), (a + b) + 1);
	if (s == 0)
		return (0);
	while (++c <= a)
		s[c] = s1[c];
	c--;
	a = 0;
	while (a <= b)
	{
		s[c] = s2[a];
		a++;
		c++;
	}
	return (s);
}
