/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 19:07:36 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/23 19:36:10 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*nlist;
	t_list	*clist;
	t_list	*plist;

	clist = *begin_list;
	plist = 0;
	while (clist)
	{
		nlist = clist->next;
		clist->next = plist;
		plist = clist;
		clist = nlist;
	}
	*begin_list = plist;
}
