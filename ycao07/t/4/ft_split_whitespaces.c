/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:44:46 by ycao              #+#    #+#             */
/*   Updated: 2017/01/19 22:47:03 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		wordnum(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
				num++;
		i++;
	}
	num++;
	return (num);
}

char    *strcopy(int b, int e, char *str)
{
    char *r;
    int z;
    int i;
    
    i = 0;
    r= (char*)malloc(sizeof(*r) * (e - b + 1));
    i = b;
    while (i <= e)
    {
        r[i] = str[i];
        i++;
    }
}


char **ft_split_whitespaces(char *str)
{
	int num;
	char **w;
    int i = 0;
	int j = 0;
	int begin = 0;
	int end = 0;

	num = wordnum(str);
    while (j < num)
    {
        begin = 0;
        end = 0;
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        while (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
        {
            if (begin == 0)
                begin = i;
            if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == '\0')
                end = i;
            if (begin * end != 0)
            {
                w[j] = (char*)malloc(sizeof(*w) * (end - begin + 1));
                w[j] = strcopy(begin, end, str);
             }
            i++;
        }
        j++;
    }
}








