/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:17:11 by ycao              #+#    #+#             */
/*   Updated: 2017/01/18 15:11:05 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"
#include "ft_putnbr.c"

void	ft_putchar(char c);

void    ft_putnbr(int nb);

int	main()
{
    int n = -1234567891;
	
    
    ft_putnbr(n);
    ft_putnbr(-2147483648);
    
    return (0);
}
