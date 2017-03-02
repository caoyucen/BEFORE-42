/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:17:11 by ycao              #+#    #+#             */
/*   Updated: 2017/01/12 15:06:17 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_strncpy.c"


void	ft_putchar(char c);

char    *ft_strcpy(char *dest, char *src, unsigned int n);

void    ft_putstr(char *str);

int	main()
{
    int n = 1;
    char d[] = "12387";
    char s[] = "23idjiqiw";
    
    ft_strncpy(d, s, n);
    ft_putstr(d);
    
    return (0);
}