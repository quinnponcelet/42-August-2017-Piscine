/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:41:17 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/21 23:05:32 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int index;

	index = 0;
	if (length < 2)
		return (1);
	while (index < length - 1)
	{
		if (f(tab[index], tab[index + 1]) > 0)
			return (0);
		index++;
	}
	return (1);
}
