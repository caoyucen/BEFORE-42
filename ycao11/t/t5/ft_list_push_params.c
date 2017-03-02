/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 19:38:51 by ycao              #+#    #+#             */
/*   Updated: 2017/01/25 21:29:47 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*temp;
	t_list	*newlist;
	int		i;

	temp = NULL;
	newlist = NULL;
	i = 0;
	while (i < ac)
	{
		newlist = ft_create_elem(av[i]);
		newlist->next = temp;
		temp = newlist;
		i++;
	}
	return (temp);
}
