/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 13:30:19 by ycao              #+#    #+#             */
/*   Updated: 2017/01/24 13:38:26 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*trim_space(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		str++;
	return (str);
}

int		ft_atoi(char *str)
{
	int		n_mark;
	int		i;
	long	rs;

	rs = 0;
	i = 0;
	n_mark = 0;
	str = trim_space(str);
	if (str[i] == '-')
	{
		n_mark = 1;
		i++;
	}
	if (str[0] == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rs *= 10;
		rs += str[i] - 48;
		i++;
	}
	if (n_mark)
		rs = -rs;
	return (rs);
}
