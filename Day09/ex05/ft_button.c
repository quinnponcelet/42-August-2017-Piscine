/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 09:32:52 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/18 09:52:56 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_button(int i, int j, int k)
{
	if (i > j && j > k)
		return (j);
	if (j > i && i > k)
		return (i);
	if (k > j && j > i)
		return (j);
	if (k > i && i > j)
		return (i);
	if (i > k && k > j)
		return (k);
	if (j > k && k > i)
		return (k);
	return (0);
}
