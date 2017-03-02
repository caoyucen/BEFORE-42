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


#include <stdio.h>
#include "ft_ultimate_range.c"

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
    int **a;
    
    ft_ultimate_range(a, 2, 6);
    if(**a)
    {
        printf("%d", a[0][1]);
    }
    return (0);
}