#include<stdio.h>
int main()
{
    long long i,t,n,m,s,tmp;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld%lld",&m,&n);
        if(m>n){
            tmp=m;
            m=n;
            n=tmp;
        }
        if(m==1||n==1) s=m*n;
        else if(m==2||n==2){
            if(m==n) s=m*n;
            else if(n%2==0){
                if((n/2)%2==0) s=(m*n)/2;
                else s=m+n;
            }
            else s=n+1;
        }
        else s=((m*n)+1)/2;
        printf("Case %lld: %lld\n",i,s);
    }
    return 0;
}
