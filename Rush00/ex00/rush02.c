/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 17:28:21 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/13 17:28:24 by xzeng            ###   ########.fr       */
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
	if ((row == 1 && column == 1) || (row == 1 && column == x))
	{
		ft_putchar('A');
	}
	else if ((column == 1 && row == y) || (row == y && column == x))
	{
		ft_putchar('C');
	}
	else if (row == 1 || row == y || column == 1 || column == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
