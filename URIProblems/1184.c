#include<stdio.h>
int main()
{
    int i,j,a;
    double n[12][12],sum=0,avg;
    char c;
    scanf("%c",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&n[i][j]);
        }
    }
    for(i=1;i<=11;i++)
    {
        for(j=0;j<i;j++)
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

