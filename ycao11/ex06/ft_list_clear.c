/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 20:19:39 by ycao              #+#    #+#             */
/*   Updated: 2017/01/25 21:24:01 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;
	t_list	*clearlist;

	clearlist = *begin_list;
	while (clearlist)
	{
		temp = clearlist->next;
		free(clearlist);
		clearlist = temp;
	}
	*begin_list = NULL;
}
