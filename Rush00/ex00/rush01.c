/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 12:05:54 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/13 15:38:09 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);
void	output (int x, int y, int row, int column);

int		rush(int x, int y)
{
	int	row;
	int	column;

	row = 1;
	column = 1;
	while (row <= y && x > 0 && y > 0)
	{
		while (column <= x)
		{
			output(x, y, row, column);
			column++;
		}
		row++;
		ft_putchar('\n');
		column = 1;
	}
	return (0);
}

void	output(int x, int y, int row, int column)
{
	if (row == 1 && column == 1)
	{
		ft_putchar('/');
	}
	else if ((row == 1 && column == x) ||
		(column == 1 && row == y))
	{
		ft_putchar('\\');
	}
	else if (row == y && column == x)
	{
		ft_putchar('/');
	}
	else if (row == 1 || row == y || column == 1 || column == x)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}
