#include <stdio.h>
#include <stdlib.h>

int     ft_any(char **tab, int(*f)(char*));

int checka(char *a)
{
    int i = 0;
    while (a[i])
    {
        if(a[i] == 'a')
           return (2);
        i++;
    }
    return (0);
}

int main()
{
    
    char **s;
    s = (char**)malloc(sizeof(char)* 3);
	s[0] = "wbc";
    s[1] = "bas";
    s[2] = "wsr";
    s[3] = 0;
    
    printf("%d\n",ft_any(s,&checka));
    return 0;
}





//for (int i =0;i<7;i++)
//printf("%d\n", rs[i]);
