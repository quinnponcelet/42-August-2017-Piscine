/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <qponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 19:41:03 by qponcele          #+#    #+#             */
/*   Updated: 2017/08/11 13:15:59 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(char i);

void  ft_return(char a,char b,char c)
{
  ft_putchar(a);
  ft_putchar(b);
  ft_putchar(c);
  if (! (a == '7' && b == '8' && c == '9'))
  {
    ft_putchar( ',' );
    ft_putchar( ' ' );
  }
}

void  ft_print_comb(void)
{
  char a;
  char b;
  char c;

  a = '0';
  b = '1';
  c = '2';
  while(a <= '7')
    {
      while(b <= '8')
	{
	  while(c <= '9')
	    { ft_return (a, b, c);
	      ++c;
	    }
	  ++b;
	  c = b + 1;
	}
      ++a;
      b = a + 1;
      c = a + 2;
    }

}
  
int   main(void)
{
  ft_print_comb();
  return (0);
}
