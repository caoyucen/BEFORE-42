/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:19:43 by ycao              #+#    #+#             */
/*   Updated: 2017/01/20 16:31:04 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		doubleornot(int *tab, int length, int n)
{
	int sum;
	int i;

	sum = 0;
	i = 0;
	while (i < length)
	{
		if (tab[i] == n)
			sum++;
		i++;
	}
	return (sum % 2);
}

int		ft_unmatch(int *tab, int length)
{
	int i;

	if (length == 0)
		return (NULL);
	i = 0;
	while (i < length)
	{
		if (doubleornot(tab, length, tab[i]) == 1)
			return (i);
		i++;
	}
	return (0);
}
