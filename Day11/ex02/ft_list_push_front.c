/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:18:33 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/23 20:13:52 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*start_list;

	start_list = *begin_list;
	if (start_list)
	{
		start_list = ft_create_elem(data);
		start_list->next = *begin_list;
		*begin_list = start_list;
	}
	else
		*begin_list = ft_create_elem(data);
}
