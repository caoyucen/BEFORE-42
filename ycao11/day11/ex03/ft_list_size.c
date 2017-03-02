/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 18:29:07 by ycao              #+#    #+#             */
/*   Updated: 2017/01/25 21:22:54 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		size;

	temp = begin_list;
	size = 0;
	if (temp)
	{
		size = 1;
		while (temp->next)
		{
			size++;
			temp = temp->next;
		}
	}
	return (size);
}
