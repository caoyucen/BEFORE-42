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

#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
    char str[] = "abcdefg";
    char to_find[] = "";
    char *ret;
    
    ret = ft_strstr(str, to_find);
    printf("la repond : %s", ret);
}