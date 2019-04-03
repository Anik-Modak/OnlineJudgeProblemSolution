#include<stdio.h>
int main()
{
    long long i,t,n,m;
    double tx;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        if(n<=180000) tx=0;
        else if(n<=480000){
                tx=(n-180000)*0.10;
                if(tx<2000) tx=2000;
        }
        else if(n<=880000) tx=30000+(n-480000)*0.15;
        else if(n<=1180000) tx=90000+(n-880000)*0.20;
        else tx=150000+(n-1180000)*0.25;
        m=tx;
        if(tx-m>0) m=m+1;
        printf("Case %lld: %lld\n",i,m);
    }
    return 0;
}
