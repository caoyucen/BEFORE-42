/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 11:49:10 by ycao              #+#    #+#             */
/*   Updated: 2017/01/19 13:33:20 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*a;
	int		i;
	int		j;
	int		size_src;

	i = 0;
	j = 0;
	size_src = 0;
	while (src[i] != '\0')
	{
		i++;
		size_src++;
	}
	a = (char*)malloc(sizeof(*a) * (size_src + 1));
	while (j < size_src)
	{
		a[j] = src[j];
		j++;
	}
	a[j] = '\0';
	free(a);
	return (a);
}
