#include<stdio.h>
int main()
{
    long long i,j,n,t;
    scanf("%lld%lld",&n,&t);

    if(t>9&&n==1)
        printf("-1\n");
    else if(t>9)
    {
        j=t-9;
        for(i=1;i<=n-1;i++)
        {
            if(i==n-1)
                printf("%lld\n",t);
            else
                printf("%lld",j);
        }
    }
    else{
        for(i=1;i<=n;i++)
        {
            if(i==n)
                printf("%lld\n",t);
            else
                printf("%lld",t);
        }
    }
    return 0;
}
