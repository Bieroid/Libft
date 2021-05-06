/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:56:27 by htommy            #+#    #+#             */
/*   Updated: 2021/04/21 15:00:23 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr (const char *str, int ch)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	if (str[a] == ch)
		return ((char *)&str[a]);
	a--;
	while (a != -1)
	{
		if (str[a] == ch)
			return ((char *)&str[a]);
		a--;
	}
	return (0);
}
