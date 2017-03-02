/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 16:05:36 by ycao              #+#    #+#             */
/*   Updated: 2017/01/25 16:57:21 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;

	temp = *begin_list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}	
