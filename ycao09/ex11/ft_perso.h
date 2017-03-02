/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:03:13 by ycao              #+#    #+#             */
/*   Updated: 2017/01/20 16:04:21 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS	1
# include <string.h>

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	int		profession;
}				t_perso;

#endif
