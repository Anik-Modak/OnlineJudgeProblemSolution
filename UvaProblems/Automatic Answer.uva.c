#include<stdio.h>
#include<math.h>
int main()
{
    long long t,i,m,n,a,ans;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        a=(((((n*567)/9)+7492)*235)/47)-498;
         m=a/10;
         ans=abs(m%10);
        printf("%lld\n",ans);
    }
    return 0;
}
