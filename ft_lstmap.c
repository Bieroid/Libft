/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:03:51 by htommy            #+#    #+#             */
/*   Updated: 2021/05/06 13:03:53 by htommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem1;
	t_list	*new;

	elem1 = 0;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (elem1)
			{
				new = elem1->next;
				(*del)(elem1->content);
				free(elem1);
				elem1 = new;
			}
			return (0);
		}
		ft_lstadd_back(&elem1, new);
		lst = lst->next;
	}
	return (elem1);
}
