/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 21:04:19 by ycao              #+#    #+#             */
/*   Updated: 2017/01/12 23:07:25 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	order(char a, char b);

void	order(char a, char b)
{
	char c;

	c = b++;
	while (a <= '9')
	{
		while (c <= '9')
		{
			if (a !=  '0'&& c != '0')
			{
				ft_putchar(a);
				ft_putchar(c);
			}
            c++;
		}
        a++;
	}
}

void ft_print_comb2(void)
{
	char n;
	char m;

	n = '1';
	m = '2';
	while (n <= '9')
	{
		while (m <= '9')
		{
			if (n != '9' && m != '9')
			{
				ft_putchar(n);
				ft_putchar(m);
				ft_putchar(' ');
			}
            
			order(n, m);

			if (n != '9' && m != '8')
			{
				ft_putchar(',');
				ft_putchar(' ');
            }
            m++;
        }
		n++;
	}
}
