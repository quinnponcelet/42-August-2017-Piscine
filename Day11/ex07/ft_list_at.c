/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 18:04:23 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/23 18:36:40 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*list;
	unsigned int	cnt;

	cnt = 1;
	list = begin_list;
	while (cnt <= nbr)
	{
		if (list == 0)
			return (0);
		list = list->next;
		cnt++;
	}
	return (list);
}
