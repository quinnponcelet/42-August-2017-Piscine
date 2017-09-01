/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 18:53:41 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/23 20:13:30 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*end_list;

	end_list = *begin_list;
	if (end_list)
	{
		while (end_list->next)
			end_list = end_list->next;
		end_list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
