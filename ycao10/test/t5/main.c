#include <stdio.h>

int ft_sort(int a, int b)
{
	if( a  < b)
    return(-1);
    else
    return 0;
}


int     ft_is_sort(int *tab, int length, int(*f)(int, int));

int main()
{
	int a[] = {0,0,0,0};
    int n = 0;
    
    
    n = ft_is_sort(a,4,&ft_sort);
    printf("%d\n",n);
	return 0;
}
