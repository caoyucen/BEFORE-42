/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 18:22:34 by ycao              #+#    #+#             */
/*   Updated: 2017/01/20 16:45:24 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	char	*s;
	int		i;
	char	temp;

	s = "Tu tu tu tu ; Tu tu tu tu";
	i = 0;
	while (s[i] != '\0')
	{
		temp = s[i];
		write(1, &temp, 1);
		i++;
	}
	temp = '\0';
	write(1, &temp, 1);
}