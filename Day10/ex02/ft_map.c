/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:11:58 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/21 23:03:09 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int index;
	int *answers;

	answers = (int*)malloc(sizeof(int) * length);
	index = 0;
	while (index < length)
	{
		answers[index] = f(tab[index]);
		index++;
	}
	return (answers);
}
