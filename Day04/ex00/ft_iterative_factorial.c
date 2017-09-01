/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:09:55 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/14 16:47:07 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int n;

	if (n >= 0 && n <= 12)
	{
		n = 1;
		while (nb >= 1)
		{
			n = n * nb;
			nb = n - 1;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}

int		main()
{
	printf("%d", ft_iterative_factorial(4));
}
