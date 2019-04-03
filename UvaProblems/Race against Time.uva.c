#include<stdio.h>
int main()
{
int power(long long a,long long n)
{
    if(n==0)
        return 1;
    long long ret=power(a*a,n/2);
    if(n%2==1)
        ret=ret*a;
    return ret;
}
    long long a,n,m,b,ans;
    scanf("%lld%lld%lld",&a,&n,&m);
    b=power(a,n);
    ans=b%m;
    printf("%lld\n",ans);
    return 0;
}
