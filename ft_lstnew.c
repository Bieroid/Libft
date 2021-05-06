/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:24:20 by htommy            #+#    #+#             */
/*   Updated: 2021/05/06 12:24:21 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem1;

	elem1 = malloc(sizeof(t_list));
	if (elem1 != 0)
	{
		elem1->content = content;
		elem1->next = 0;
		return (elem1);
	}
	else
		return (0);
}
