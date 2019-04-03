#include<stdio.h>
int main()
{
    long long n,s;
    while(scanf("%lld",&n)!=EOF){
        s=(n*(n+2))/2;
        s=s+(s-2)+(s-4);
        printf("%lld\n",s);
    }
    return 0;
}
