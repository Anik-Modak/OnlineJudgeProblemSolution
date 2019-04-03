#include<stdio.h>
int main()
{
int n1,c1,n2,c2;
double p1,p2,p;
scanf("%d%d%lf",&n1,&c1,&p1);
scanf("%d%d%lf",&n2,&c2,&p2);
p=(c1*p1+c2*p2);
printf("VALOR A PAGAR: R$ %.2lf\n",p);
return 0;
}
