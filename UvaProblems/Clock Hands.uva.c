#include<stdio.h>
int main()
{
    int h,m;
    double s,t,angl;
    while(1)
    {
        scanf("%d:%d",&h,&m);
        if(h==0&&m==0) break;
        t=(h+(double)m/60)*30;
        s=m*6;
        angl=t-s;
        if(angl<0)
            angl=-angl;
        if(angl>180)
            angl=360-angl;
        printf("%.3lf\n",angl);
    }
    return 0;
}
