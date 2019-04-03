#include<stdio.h>
int main()
{
    long long n,i,s;
    while(1){
        scanf("%lld",&n);
        if(n<0) break;
        s=(n*(n+1))/2;
        printf("%lld\n",s+1);
    }
    return 0;
}
