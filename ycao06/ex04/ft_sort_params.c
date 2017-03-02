/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 19:52:50 by ycao              #+#    #+#             */
/*   Updated: 2017/01/18 23:40:59 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		bigger(char *a, char *b);

void	print(int argc, char **argv);

char	*ft_strcpy(char *dest, char *src);

int		bigger(char *a, char *b)
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

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

void	print(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	temp[100000];
	int		i;
	int		j;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 1)
		{
			j = 0;
			while (j < i)
			{
				if (bigger(argv[j], argv[j + 1]) <= 0)
					j++;
				else
				{
					ft_strcpy(temp, argv[j]);
					ft_strcpy(argv[j], argv[j + 1]);
					ft_strcpy(argv[j + 1], temp);
					j++;
				}
			}
			i--;
		}
		print(argc, argv);
	}
	return (0);
}
