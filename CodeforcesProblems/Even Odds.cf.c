#include<stdio.h>
int main()
{
    long long i,j,n,k,m;
    scanf("%lld %lld",&n,&k);
    if(n%2==0)
        n=n;
    else
        n=n+1;
    if(k<=n/2)
    {
        for(i=1,j=1;i<k;i++)
        {
            j=j+2;
        }
        printf("%lld\n",j);
    }
    else
    {
        m=k-n/2;
        for(j=1,i=2;j<m;j++)
        {
            i=i+2;
        }
        printf("%lld\n",i);
    }
    return 0;
}
