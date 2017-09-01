/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimatet_div.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 22:53:38 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/11 23:40:55 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int qp;

	if (!(b == 0))
	{
		qp = *a;
		*a = *a / *b;
		*b = qp % b;
	}
}
