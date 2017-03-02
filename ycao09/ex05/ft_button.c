/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 10:08:45 by ycao              #+#    #+#             */
/*   Updated: 2017/01/20 16:37:59 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	int max;
	int min;

	max = -2147483648;
	min = 2147483647;
	if (max < i)
		max = i;
	if (max < j)
		max = j;
	if (max < k)
		max = k;
	if (min > i)
		min = i;
	if (min > j)
		min = j;
	if (min > k)
		min = k;
	return (i + j + k - min - max);
}
