/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterate_power.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:54:51 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/12 22:18:19 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int n;

	if (power > 0)
	{
		n = nb;
		while (power >= 2)
		{
			nb = nb * n;
			power--;
		}
		return (nb);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
