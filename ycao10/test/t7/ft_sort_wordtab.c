/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 20:56:44 by ycao              #+#    #+#             */
/*   Updated: 2017/01/24 21:57:39 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *a, char *b)
{
	int		i;

	i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] > b[i])
			return (1);
		if (a[i] < b[i])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i + 1])
	{
		j = i;
		while (tab[j + 1])
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
