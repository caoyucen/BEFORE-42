/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:18:23 by ycao              #+#    #+#             */
/*   Updated: 2017/01/19 18:15:00 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int		*r;
	int		i;

	if (min >= max)
	{
	   	*range = 0;
		return (0);
	}
	else
	{
		i = 0;
		r = (int*)malloc(sizeof(*r) * (max - min));
		while (min < max)
   		{
			r[i] = min;
			i++;
			min++;
   		}
		*range = r;
	}
	return (i);
}
