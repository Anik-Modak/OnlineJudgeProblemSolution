#include<stdio.h>
int main()
{
    long long m1,h1,m2,h2,m,h,time;
    while(1){
        scanf("%lld%lld%lld%lld",&h1,&m1,&h2,&m2);
        if(m1==0&&h1==0&&m2==0&&h2==0) break;
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

        time=h*60+m;
        printf("%d\n",time);
    }
    return 0;
}
