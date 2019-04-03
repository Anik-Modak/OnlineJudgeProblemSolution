#include<stdio.h>
int main()
{
    long long m,n,max;
    scanf("%lld%lld",&n,&m);
    if(n==m) max=m;
    else max=2;
    printf("%lld\n",max);
    return 0;
}
