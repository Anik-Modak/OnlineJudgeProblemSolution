#include<stdio.h>
int main()
{
    long long a,b,d;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(b>a) d=(b-a);
        else d=(a-b);
        printf("%lld\n",d);
    }
    return 0;
}

