#include<stdio.h>
#include<math.h>
int main()
{
    long long i,u,v,d,t;
    double r1,r2,t1,t2,diff;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld%lld%lld",&d,&v,&u);
        if(u>v){
            r1=sqrt(u*u+v*v);
            r2=sqrt(u*u-v*v);
            t1=d/r1;
            t2=d/r2;
            diff=t2-t1;
            printf("Case %lld: %.3lf\n",i,diff);
        }
        else
            printf("Case %lld: can’t determine\n",i);
    }
    return 0;
}
