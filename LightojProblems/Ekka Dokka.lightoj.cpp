#include<bits/stdc++.h>
int main()
{
    long long i,t,n,m,a;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        if(n%2!=0)
            printf("Case %lld: Impossible\n",i);
        else{
            m=1;
            while(n%2==0){
                m*=2;
                n/=2;
            }
            printf("Case %lld: %lld %lld\n",i,n,m);
        }
    }
    return 0;
}
