/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 18:18:15 by ycao              #+#    #+#             */
/*   Updated: 2017/01/19 19:41:48 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>



char	*ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
    
   
    
    char *n;
    n = ft_concat_params(argc,argv);
    printf("%s",n);
    return(0);
}