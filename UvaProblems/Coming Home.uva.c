#include<stdio.h>
int main()
{
    long long i,j,t,k,h1,m1,h2,m2,q,m,h,time,min;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld%lld:%lld",&k,&h1,&m1);
        for(j=1;j<=k;j++){
            scanf("%lld:%lld%lld",&h2,&m2,&q);
            if(h1==0) h1=24;
            if(h2==0) h2=24;
            if(m1>m2)
            {
                m2=m2+60;
                m=m2-m1;

            if(h1+1>h2)
                h2=h2+24;
            h=h2-(h1+1);
            }
            else
            {
                if(h1>h2) h2=h2+24;
                m=m2-m1;
                h=h2-h1;
            }
            time=h*60+m+q;
            if(j==1) min=time;
            if(min>time) min=time;
        }
        printf("Case %lld: %lld\n",i,min);
    }
    return 0;
}
