/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <htommy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:09:39 by htommy            #+#    #+#             */
/*   Updated: 2021/04/30 17:52:06 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_colichestvo(char const *s, char c)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if ((s[0] != c) && (s[0] != '\0'))
		b++;
	while (s[a] != '\0')
	{
		if ((s[a] == c) && (s[a + 1] != c) && (s[a + 1] != '\0'))
			b++;
		a++;
	}
	return (b);
}

char	**ft_del(char **l, int a)
{
	while (a >= 0)
	{
		free(l[a]);
		a--;
	}
	free(l);
	return (0);
}

void	ft_increm(int *k, int *d)
{
	*k = *k + 1;
	*d = *d + 1;
}

char 	**ft_socras(char **l, char const *s, char c, int a)
{
	int	b;
	int	d;
	int	k;

	b = -1;
	d = 0;
	while (s[++b] != '\0')
	{
		if ((s[b] == c) && (s[b + 1] != '\0') && (s[b + 1] != c))
			d = b + 1;
		if ((s[b] != c) && ((s[b + 1] == c) || (s[b + 1] == '\0')))
		{
			k = 0;
			l[a] = ft_calloc(sizeof(char), b - d + 2);
			if (l[a] == 0)
				return (ft_del(l, a));
			while (d <= b)
			{
				l[a][k] = s[d];
				ft_increm(&k, &d);
			}
			a++;
		}
	}
	return (l);
}

char	**ft_split(char const *s, char c)
{
	int		a;
	char	**l;

	if (s == 0)
		return (0);
	a = ft_colichestvo(s, c);
	l = ft_calloc(sizeof(char *), (a + 1));
	if (l == 0)
		return (0);
	a = 0;
	return (ft_socras(l, s, c, a));
}
