#include<stdio.h>
int main()
{
    int i,j,a,m;
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
    m=11;
    for(i=0;i<11;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+n[i][j];
            a++;
        }
        m--;
    }
    if(c=='S')
        printf("%.1lf\n",sum);
    else if(c=='M'){
        avg=sum/a;
        printf("%.1lf\n",avg);
    }
    return 0;
}


