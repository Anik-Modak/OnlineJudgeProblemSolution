#include<stdio.h>
int main()
{
char c;
double a,b,t;
scanf("%s",&c);
scanf("%lf%lf",&a,&b);
t=a+b*0.15;
printf("TOTAL = R$ %.2lf\n",t);
return 0;
}
