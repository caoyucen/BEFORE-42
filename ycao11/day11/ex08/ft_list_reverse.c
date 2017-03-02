/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 22:36:18 by ycao              #+#    #+#             */
/*   Updated: 2017/01/25 23:26:33 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*newlist;
	t_list	*temp;

	if (!*begin_list)
		return ;
	if (!((*begin_list)->next))
		return ;
	newlist = NULL;
	while (*begin_list)
	{
		temp = *begin_list;
		(*begin_list)->next = newlist;
		newlist = *begin_list;
		*begin_list = temp;
	}
	*begin_list = newlist;
}
