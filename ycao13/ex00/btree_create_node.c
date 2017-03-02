/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:52:32 by ycao              #+#    #+#             */
/*   Updated: 2017/01/27 12:03:54 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *temp;

	temp = (t_btree*)malloc(sizeof(t_btree));
	if (temp)
	{
		temp->left = 0;
		temp->right = 0;
		temp->item = item;
	}
	return (temp);
}
