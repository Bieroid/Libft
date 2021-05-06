/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:51:31 by htommy            #+#    #+#             */
/*   Updated: 2021/04/21 17:51:32 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	return (((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122))
		|| ((ch >= 48) && (ch <= 57)));
}
