/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 18:18:15 by ycao              #+#    #+#             */
/*   Updated: 2017/01/19 20:41:20 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		z;
	char	*r;

	i = 0;
	z = 0;
	while (++i < argc)
		z = z + ft_strlen(argv[i]);
	r = (char*)malloc(sizeof(*r) * z);
	i = 0;
	z = 0;
	while (++i < argc)
	{
		j = -1;
		while (++j < ft_strlen(argv[i]))
			r[z + j] = argv[i][j];
		r[z + j] = '\n';
		z = z + j + 1;
	}
	r[z - 1] = '\0';
	return (r);
}
