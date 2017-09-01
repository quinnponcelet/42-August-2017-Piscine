/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:34:20 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/12 21:58:18 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 13)
	{
		return (nb >= 1 ? nb * ft_recursive_factorial(nb - 1) : 1);
	}
	else
	{
		return (0);
	}
}
