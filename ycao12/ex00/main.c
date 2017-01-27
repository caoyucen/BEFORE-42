/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:49:40 by ycao              #+#    #+#             */
/*   Updated: 2017/01/26 15:09:04 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft_list.h"
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	if (argc < 2 || argc > 2)
	{
		if (argc < 2)
			ft_putstr("File name missing.\n");
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd != -1)
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
		ft_putchar('\n');
	}
	return (0);
}
