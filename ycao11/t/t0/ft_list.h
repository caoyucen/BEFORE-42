/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 11:21:58 by ycao              #+#    #+#             */
/*   Updated: 2017/01/25 15:37:03 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

typedef	struct	s_list
{
	struct	s_list	*next;
	void			*data;
}				t_list;

t_list *ft_create_elem(void *data);

#endif
