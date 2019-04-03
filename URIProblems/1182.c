#include<stdio.h>
int main()
{
    char c;
    int i,j,a;
    double n[12][12],sum=0,avg;
    scanf("%d",&a);
    getchar();
    scanf("%c",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&n[i][j]);
            if(j==a)
                sum=sum+n[i][j];
        }
    }
    if(c =='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/12);
    return 0;
}

