/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 18:24:19 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/15 23:37:55 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index1;
	int index2;

	index1 = 0;
	index2 = 0;
	while (str[index1] != '\0')
	{
		if (str[index1] != to_find[index2])
			++index1;
		else
		{
			++index1;
			++index2;
		}
		if (to_find[index2] == '\0')
			return (&str[index1 - index2]);
	}
	return (0);
}
