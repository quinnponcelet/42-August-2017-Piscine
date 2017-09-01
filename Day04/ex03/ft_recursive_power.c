/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:22:46 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/12 22:22:17 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power != 0)
	{
		return (power > 0 ? nb * ft_recursive_power(nb, power - 1) : 0);
	}
	else
	{
		return (1);
	}
}
