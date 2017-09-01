/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 08:32:42 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/10 19:47:37 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i);

void	ft_print_numbers(void)
{
	char i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		++i;
	}
	ft_putchar('\n');
}
