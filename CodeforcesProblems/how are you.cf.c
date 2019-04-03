#include<stdio.h>
int main()
{
    int t,i,d1,m1,y1,d2,m2,y2,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        if(d2>d1){
            d1=d1+30;
            m2=m2+1;
        }
        if(m2>m1){
            m1=m1+30;
            y2=y2+1;
        }
        y=y1-y2;
        if(y<0)
            printf("Case #%d: Invalid birth date\n",i);
        else if(y>130)
            printf("Case #%d: Check birth date\n",i);
        else
            printf("Case #%d: %d\n",i,y);
    }
    return 0;
}

