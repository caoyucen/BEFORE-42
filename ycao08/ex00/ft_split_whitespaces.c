/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:21:31 by ycao              #+#    #+#             */
/*   Updated: 2017/01/20 13:42:39 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		wordsize(char *str)
{
	int rs;
	int i;

	rs = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			if (str[i] != '\0')
				i++;
			else
				break ;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		rs++;
	}
	return (rs);
}

char	*first_str(char *str, int *index)
{
	int		i;
	int		start;
	char	*rs;
	int		end;

	start = *index;
	i = start;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		if (str[i] != '\0')
			i++;
		else
			break ;
	end = i;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	*index = i;
	i = -1;
	rs = (char*)malloc(end - start + 1);
	while (++i < end - start)
		rs[i] = str[start + i];
	rs[i] = '\0';
	return (rs);
}

char	**ft_split_whitespaces(char *str)
{
	char	**r;
	int		i;
	int		wordnum;
	int		index;

	wordnum = wordsize(str);
	r = (char**)malloc(sizeof(char*) * (wordnum + 1));
	i = 0;
	index = 0;
	while (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		str++;
	while (str[i] != '\0')
		r[index++] = first_str(str, &i);
	r[index] = 0;
	return (r);
}
