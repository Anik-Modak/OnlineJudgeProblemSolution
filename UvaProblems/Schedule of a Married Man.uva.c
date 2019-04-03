#include<stdio.h>
int main()
{
    int i,t,m1,h1,m2,h2,m,h,t1,t2,t3,t4,m3,h3,m4,h4,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        k=0;
        scanf("%d:%d%d:%d",&h1,&m1,&h2,&m2);
        scanf("%d:%d%d:%d",&h3,&m3,&h4,&m4);
        t1=(h1*60)+m1;
        t2=(h2*60)+m2;
        t3=(h3*60)+m3;
        t4=(h4*60)+m4;
        for(j=t1;j<=t2;j++){
            if(t3<=j&&j<=t4)
                k=1;
        }
        if(k==1)
            printf("Case %d: Mrs Meeting\n",i);
        else
            printf("Case %d: Hits Meeting\n",i);
    }
    return 0;
}
