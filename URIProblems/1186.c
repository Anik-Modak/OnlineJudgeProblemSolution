#include<stdio.h>
int main()
{
    char c;
    int i,j,a=0,m;
    double n[12][12],sum=0,avg;
    scanf("%c",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&n[i][j]);
        }
    }
    m=12;
    for(i=1;i<12;i++)
    {
        m--;
        for(j=m;j<12;j++)
        {
            sum=sum+n[i][j];
            a++;
        }
    }
    if(c=='S')
        printf("%.1lf\n",sum);
    else{
        avg=sum/a;
        printf("%.1lf\n",avg);
    }
    return 0;
}


