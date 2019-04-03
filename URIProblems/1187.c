#include<stdio.h>
int main()
{
    char c;
    int i,j,a,m;
    double n[12][12],sum=0,avg;
    scanf("%c",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&n[i][j]);
        }
    }
    m=11;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<m;j++)
        {
            sum=sum+n[i][j];
            a++;
        }
        m--;
    }
    if(c =='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/a);
    return 0;
}

