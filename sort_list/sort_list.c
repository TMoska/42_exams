/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:35:07 by exam              #+#    #+#             */
/*   Updated: 2016/12/18 02:27:52 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		list_length(t_list *begin_list)
{
	int size;

	size = 0;
	while (begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;
	int		size;
	int		a;
	int		swap;

	a = 0;
	size = list_length(lst);
	tmp = lst;
	while (a < size)
	{
		while (lst->next)
		{
			if ((*cmp)(lst->data, lst->next->data) == 0)
			{
				swap = lst->data;
				lst->data = lst->next->data;
				lst->next->data = swap;
			}
			lst = lst->next;
		}
		lst = tmp;
		a++;
	}
	return (tmp);
}
