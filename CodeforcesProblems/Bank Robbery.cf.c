#include<stdio.h>
int main()
{
    long long a,b,c,n,x,i,max=0;
    scanf("%lld%lld%lld",&a,&b,&c);
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&x);
        if(x>b&&x<c) max++;
    }
    printf("%lld\n",max);
    return 0;
}
