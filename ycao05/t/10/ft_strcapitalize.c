/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 23:21:25 by ycao              #+#    #+#             */
/*   Updated: 2017/01/17 23:42:01 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;
	int temp;

	i = 0;
	temp = 1;
	while (*str != "\0")
	{
		while (temp == 1)
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = str[i] + 32;
			temp = 0;
		}
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			i++;
		}
		if((str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == ';'
					|| str[i] == '!' || str[i] == '?')
				temp = 1;
	}
	return (str);
}
