/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:48:44 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/21 23:05:30 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int index;

	index = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]) == 1)
			return (1);
		index++;
	}
	return (0);
}
