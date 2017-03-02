#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));

int ft_add(int a)
{
    int b;
    
    b = a + 1;
    
    return (b);
}

int main()
{
    int *s;
	int a[] = {0,1,2,3,4,5,6};
    s = ft_map(a,7,&ft_add);
    for(int i = 0;i < 7;)
    {
        printf("%d\n",s[i]);
        i++;
    }
	return 0;
}





//for (int i =0;i<7;i++)
//printf("%d\n", rs[i]);