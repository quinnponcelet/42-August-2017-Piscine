/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:09:07 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/15 23:23:44 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int index;
	int nbr;
	int sign;

	index = 0;
	nbr = 0;
	sign = 0;
	while ((str[index] == '\n') || (str[index] == '\t') || (str[index] == '\v')
	|| (str[index] == ' ') || (str[index] == '\f') || (str[index] == '\r'))
		index++;
	if (str[index] == '-')
		sign = 1;
	if ((str[index] == '+') || (str[index] == '-'))
		index++;
	while ((str[index] >= '0') && (str[index] <= '9'))
	{
		nbr = nbr * 10;
		if (sign == 0)
			nbr = nbr + (str[index] - '0');
		else
			nbr = nbr - (str[index] - '0');
		index++;
	}
	return (nbr);
}
