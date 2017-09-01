/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:35:22 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/23 18:34:55 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*clear;
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		if (list->next)
			clear = list->next;
		else
			clear = 0;
		free(list);
		list = clear;
	}
	*begin_list = 0;
}
