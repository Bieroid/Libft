/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:04:45 by htommy            #+#    #+#             */
/*   Updated: 2021/04/21 16:04:46 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sum(const char *str, int a, int minus)
{
	int	sum;

	sum = 0;
	while ((str[a] >= 48) && (str[a] <= 57))
	{
		sum = (sum * 10) + (str[a] - 48);
		a++;
		if ((str[a] < 48) || (str[a] > 57))
		{
			if (minus == 0)
				return (sum);
			else
				return (-sum);
		}
	}
	return (0);
}

int	ft_atoi(const char	*str)
{
	int	a;
	int	minus;

	a = 0;
	minus = 0;
	while ((str[a] == ' ') || (str[a] == '\n') || (str[a] == '\t')
		|| (str[a] == '\v') || (str[a] == '\f') || (str[a] == '\r'))
		a++;
	if ((str[a] == '+') || (str[a] == '-'))
	{
		if (str[a] == '-')
			minus = 1;
		a++;
	}
	return (ft_sum(str, a, minus));
}
