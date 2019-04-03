#include<stdio.h>
int main()
{
    long long t,n,m=0,c=0,max=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        if(n>=m) c++;
        else c=1;
        m=n;
        if(max<c) max=c;
    }
    printf("%lld\n",max);
    return 0;
}
