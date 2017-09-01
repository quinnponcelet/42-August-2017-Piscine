/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:05:31 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/23 15:07:43 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		counter;

	list = begin_list;
	counter = 0;
	while (list)
	{
		list = list->next;
		counter = counter + 1;
	}
	return (counter);
}
