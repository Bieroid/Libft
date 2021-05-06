/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:20:25 by htommy            #+#    #+#             */
/*   Updated: 2021/04/28 19:20:27 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*d;

	if (s == 0)
		return (0);
	a = 0;
	d = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (d == 0)
		return (0);
	while (s[a] != '\0')
	{
		d[a] = f(a, s[a]);
		a++;
	}
	d[a] = '\0';
	return (d);
}
