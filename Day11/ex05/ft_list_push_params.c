/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 09:41:43 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/23 18:34:49 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*add_link(t_list *list, void *data)
{
	t_list	*add;

	add = malloc(sizeof(t_list));
	if (add)
	{
		add->data = data;
		add->next = list;
	}
	return (add);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	int			index;

	list = ft_create_elem(av[1]);
	index = 2;
	if (ac == 1)
		return (NULL);
	while (index < ac)
	{
		list = add_link(list, av[index]);
		index++;
	}
	return (list);
}
