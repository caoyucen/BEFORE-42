/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 14:12:17 by ycao              #+#    #+#             */
/*   Updated: 2017/01/24 14:13:13 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_positive(long nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	print_positive(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	print_positive(n);
}
