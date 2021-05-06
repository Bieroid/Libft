/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:39:15 by htommy            #+#    #+#             */
/*   Updated: 2021/04/21 14:39:16 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr (const char *str, int ch)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] == ch)
			return ((char *)&str[a]);
		a++;
	}
	if (str[a] == ch)
		return ((char *)&str[a]);
	return (0);
}
