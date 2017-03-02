/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:17:11 by ycao              #+#    #+#             */
/*   Updated: 2017/01/18 16:34:48 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include "ft_range.c"

int     *ft_range(int min, int max);


int     main(void)
{
    int     *res;
    int     min;
    int     max;
    
    
    min = 6;
    max = -6;
    res = ft_range(min, max);
    max = max - min;
    min = 0;
    while (min < max)
        printf("%d ", res[min++]);
    printf("\n");
    return (0);
}
