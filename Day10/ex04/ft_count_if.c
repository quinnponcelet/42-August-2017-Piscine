/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:59:32 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/21 23:01:45 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int calc;

	index = 0;
	calc = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			calc = calc + 1;
		index++;
	}
	return (calc);
}
