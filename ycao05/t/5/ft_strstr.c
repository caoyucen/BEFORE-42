/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 21:46:19 by ycao              #+#    #+#             */
/*   Updated: 2017/01/17 22:58:25 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		size;
	int		i;

	if (*to_find == '\0')
		return (str);
	size = 0;
	while (to_find[size] != '\0')
		size++;
	while (*str != '\0')
	{
		i = 0;
		while (i < size)
		{
			while (str[i] == to_find[i])
			{
				i++;
				if (i == size)
					return (str);
			}
			i = size + 2;
		}
		str++;
	}
	return (NULL);
}
