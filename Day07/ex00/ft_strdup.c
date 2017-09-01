/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:23:57 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/17 23:20:23 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int 	index;
	int 	slen;
	char 	*str;

	cdslen = 0;
	while (src[slen] != '\0')
		++slen;
	str = (char*)malloc(sizeof(*src) * (slen + 1));
	index = 0;
	while (index < slen + 1)
	{
		str[index] = src[index];
		index++;
	}
	return (str);
}
