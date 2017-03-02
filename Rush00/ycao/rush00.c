/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfargon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 16:13:30 by hfargon           #+#    #+#             */
/*   Updated: 2017/01/15 22:30:59 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_char(int i, int j, int x, int y)
{
	if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
	{
		return ('o');
	}
	else if ((j == 0 || j == y - 1) && (i > 0 && i < x - 1))
	{
		return ('-');
	}
	else if ((j > 0 && j < y - 1) && (i == 0 || i == x - 1))
	{
		return ('|');
	}
	return (' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j <= y - 1)
	{
		while (i <= x - 1)
		{
			ft_putchar(get_char(i, j, x, y));
			i++;
		}
		j++;
		i = 0;
		ft_putchar('\n');
	}
}
