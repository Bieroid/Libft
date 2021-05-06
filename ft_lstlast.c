/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:39:52 by htommy            #+#    #+#             */
/*   Updated: 2021/05/06 12:39:53 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		a;
	int		b;
	t_list	*elem1;

	if (!lst)
		return (0);
	b = 1;
	a = ft_lstsize(lst);
	while (b != a)
	{
		lst = lst->next;
		b++;
	}
	elem1 = lst;
	return (elem1);
}
