#include<stdio.h>
int main()
{
    long long i,t,n,m,sum;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        sum=0;
        while(n--){
            scanf("%lld",&m);
            if(m>0)
                sum=sum+m;
        }
        printf("Case %lld: %lld\n",i,sum);
    }
    return 0;
}
