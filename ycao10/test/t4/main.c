#include <stdio.h>
#include <stdlib.h>

int     ft_count_if(char **tab, int(*f)(char*));

int checka(char *a)
{
    int i = 0;
    while (a[i])
    {
        if(a[i] == 'a')
           return (1);
        i++;
    }
    return (0);
}

int main()
{
    
    char **s;
    s = (char**)malloc(sizeof(char)* 3);
	s[0] = "wbc";
    s[1] = "ddd";
    s[2] = "wdr";
    s[3] = 0;
    
    printf("%d\n",ft_count_if(s,&checka));
    return 0;
}





//for (int i =0;i<7;i++)
//printf("%d\n", rs[i]);