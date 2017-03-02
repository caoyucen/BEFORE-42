/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:18:29 by ycao              #+#    #+#             */
/*   Updated: 2017/01/19 16:22:23 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*n;
	int		i;

	if (min >= max)
	{
		n = 0;
		return (n);
	}
	else
	{
		i = 0;
		n = (int*)malloc(sizeof(*n) * (max - min));
		while (min < max)
		{
			n[i] = min;
			i++;
			min++;
		}
	}
	return (n);
}
