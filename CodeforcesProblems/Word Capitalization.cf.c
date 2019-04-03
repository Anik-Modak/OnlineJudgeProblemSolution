#include<stdio.h>
int main()
{
    char c[10000];
    scanf("%s",c);
    if(c[0]>='a')
        c[0]=c[0]-('a'-'A');
    printf("%s\n",c);
    return 0;
}
