/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 16:59:02 by ycao              #+#    #+#             */
/*   Updated: 2017/01/24 20:06:01 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/do_op.h"

int		opornot(char *a)
{
	int		i;
	char	*op;

	i = 0;
	op = "+-*/%";
	if (ft_strlen(a) != 1)
		return (1);
	while (i < 5)
	{
		if (op[i] == a[0])
			return (0);
		else
			i++;
	}
	return (1);
}

void	stopornot(char c)
{
	if (c == '/')
		ft_putstr("Stop : division by zero");
	if (c == '%')
		ft_putstr("Stop : modulo by zero");
}

int		op(int a, int b, char c)
{
	int result;

	if (c == '+')
		result = a + b;
	if (c == '-')
		result = a - b;
	if (c == '*')
		result = a * b;
	if (c == '/')
		result = a / b;
	if (c == '%')
		result = a % b;
	return (result);
}

int		main(int argc, char **argv)
{
	int result;
	int n;
	int m;

	if (argc != 4)
		return (0);
	if (opornot(argv[2]))
	{
		ft_putchar('0');
		return (0);
	}
	n = ft_atoi(argv[1]);
	m = ft_atoi(argv[3]);
	if ((argv[2][0] == '%' || argv[2][0] == '/') && m == 0)
		stopornot(argv[2][0]);
	else
	{
		result = op(n, m, argv[2][0]);
		ft_putnbr(result);
		return (0);
	}
	return (0);
}
