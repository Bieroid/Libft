/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:53:52 by htommy            #+#    #+#             */
/*   Updated: 2021/04/28 17:53:54 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_itoa_socr(int b, int min, unsigned int a)
{
	char	*s;

	s = malloc(sizeof(char) * (b + min) + 1);
	if (s == 0)
		return (0);
	s[b + min] = '\0';
	if (min == 0)
		b--;
	while (b >= 0)
	{
		s[b] = (a % 10) + 48;
		a = a / 10;
		b--;
	}
	if (min == 1)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	unsigned int	a;
	int				b;
	int				min;

	b = 0;
	min = 0;
	if (n < 0)
	{
		a = -n;
		min = 1;
	}
	else
		a = n;
	while (a != 0)
	{
		a = a / 10;
		b++;
	}
	if (min == 1)
		a = -n;
	else
		a = n;
	if (n == 0)
		b++;
	return (ft_itoa_socr(b, min, a));
}
