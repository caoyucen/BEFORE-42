/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:49:51 by ycao              #+#    #+#             */
/*   Updated: 2017/01/17 15:52:05 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		nums(int n);

void	neg_ornot(int n);

int		nums(int n)
{
	int nnum;

	if (n < 0)
		n = 0 - n;
	nnum = 0;
	while (n >= 1)
	{
		nnum++;
		n = n / 10;
	}
	return (nnum);
}

void	neg_ornot(int n)
{
	if (n == 0)
		ft_putchar('0');
	if (n < 0)
		ft_putchar('-');
}

void	ft_putnbr(int nb)
{
	int		nbnum;
	char	nbcout[12];
	int		i;
	int		j;

	neg_ornot(nb);
	if (nb < 0)
	{
		nb = 0 - nb;
	}
	nbnum = nums(nb);
	i = nbnum - 1;
	while (i >= 0)
	{
		nbcout[i] = '0' + (nb % 10);
		nb = nb / 10;
		i--;
	}
	j = 0;
	while (j < nbnum)
	{
		ft_putchar(nbcout[j]);
		j++;
	}
}
