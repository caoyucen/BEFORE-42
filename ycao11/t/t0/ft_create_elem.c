/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 22:07:41 by ycao              #+#    #+#             */
/*   Updated: 2017/01/25 16:02:26 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*temp;

	temp = (t_list*)malloc(sizeof(t_list));
	if (temp)
	{
		temp->next = NULL;
		temp->data = data;
	}
	return (temp);
}
