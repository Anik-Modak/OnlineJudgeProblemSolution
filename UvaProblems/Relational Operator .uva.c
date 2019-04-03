#include<stdio.h>
int main()
{
    long long t,n,m,i;
    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&n,&m);
         if(n==m)
            printf("=\n");
         else if(n>m)
            printf(">\n");
         else if(n<m)
            printf("<\n");
    }
    return 0;
}
