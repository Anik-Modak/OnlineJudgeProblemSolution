#include<stdio.h>
int main()
{
    long long t,m,n,i,s,a,max=0;
    scanf("%lld",&t);
    s=0;
    for(i=1;i<=t;i++){
        scanf("%lld%lld",&m,&n);
        s=s+(n-m);
        if(max<s)
            max=s;
    }
    printf("%lld",max);
    return 0;
}
