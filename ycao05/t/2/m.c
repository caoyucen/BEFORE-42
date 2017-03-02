/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:17:11 by ycao              #+#    #+#             */
/*   Updated: 2017/01/18 15:23:21 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int     ft_atoi(char *str);


int main()
{
   char a[] = "     1241";
    
    int n = 0;
    n = ft_atoi(a);
    printf("%d\n" ,n);
    printf("%i\n", atoi("123abc")); 
    return (0);
}
