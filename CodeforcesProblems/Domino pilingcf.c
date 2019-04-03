#include<stdio.h>
int main()
{
    int a,b,n,m,c=0;
    scanf("%d%d",&a,&b);
    m=a*b;
    n=2;
    while(n<=m)
    {
        n=n+2;
        c++;
    }
    printf("%d\n",c);
    return 0;
}
