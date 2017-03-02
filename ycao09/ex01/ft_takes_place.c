/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 15:24:22 by ycao              #+#    #+#             */
/*   Updated: 2017/01/20 16:36:08 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_time(int hour)
{
	if (hour < 12)
	{
		if (hour == 0)
			hour = 12;
		printf("%d.00 A.M. ", hour);
	}
	else
	{
		if (hour > 12)
			hour -= 12;
		printf("%d.00 P.M. ", hour);
	}
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	print_time(hour);
	printf("AND ");
	print_time(hour + 1);
	printf("\n");
}
