/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 22:00:31 by ycao              #+#    #+#             */
/*   Updated: 2017/01/14 22:42:22 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
	{
		return (0);
	}
	i = 1;
	while (i * i < nb)
	{
		i = i + 2;
	}
	if (i * i == nb)
		return (i);
	else
	{
		if ((i - 1) * (i - 1) == nb)
			return (i - 1);
		else
			return (0);
	}
}
