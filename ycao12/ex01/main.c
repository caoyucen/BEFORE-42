/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 15:29:16 by ycao              #+#    #+#             */
/*   Updated: 2017/01/26 22:03:55 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft_list.h"
#include "errno.h"
#define BUF_SIZE 10

void	nofile(char *a)
{
	ft_putstr("cat: ");
	ft_putstr(a);
	ft_putstr(": No such file or directory");
}

void	isadir(char *a)
{
	ft_putstr("cat: ");
	ft_putstr(a);
	ft_putstr(": Is a directory");
}

void	openread(int fd, char *ar)
{
	char	buf[BUF_SIZE + 1];
	int		ret;

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (errno == EISDIR)
		{
			isadir(ar);
			errno = 0;
			break ;
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;

	i = 1;
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (errno == ENOENT)
		{
			nofile(argv[i]);
			errno = 0;
		}
		else
			openread(fd, argv[i]);
		close(fd);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
