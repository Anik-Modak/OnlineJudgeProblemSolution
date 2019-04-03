#include<stdio.h>
int main()
{
int n,i;
double a,b,c,avg;
scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        avg=(2*a+3*b+5*c)/10;
        printf("%.1lf\n",avg);
    }
return 0;
}
