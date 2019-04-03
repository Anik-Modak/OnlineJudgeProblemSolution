#include<stdio.h>
int main()
{
    double x;
    int i;
    scanf("%lf",&x);
    for(i=0;i<=99;i++)
    {
        printf("N[%d] = %.4lf\n",i,x);
        x=x/2;
    }
return 0;
}
