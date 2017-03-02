/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 22:10:37 by ycao              #+#    #+#             */
/*   Updated: 2017/01/25 22:32:41 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*temp;
	unsigned int	i;

	temp = begin_list;
	i = 0;
	if (!temp)
		return (NULL);
	while (i < nbr)
	{
		if (!temp->next)
			return (NULL);
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (temp);
}
