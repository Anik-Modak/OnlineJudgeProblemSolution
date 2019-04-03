#include<stdio.h>
int main()
{
    long long x,n;
    double d;
    scanf("%lld",&n);
    x=n/5;
    d=(double)n/5;
    if(d-x>0)
        x=x+1;
    printf("%lld\n",x);
    return 0;
}
