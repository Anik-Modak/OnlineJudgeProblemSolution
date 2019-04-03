#include<stdio.h>
int main()
{
double a,b,c;
scanf("%lf",&a);
if(0<=a&&a<=2000.00){
    printf("Isento\n");
    }
else if(2000.01<=a&&a<=3000.00){
    c=a-2000.00;
    b=c*0.08;
    printf("R$ %.2lf\n",b);
    }
else if(3000.01<=a&&a<=4500.00){
    c=a-2000.00;
    b=(c-1000)*0.18+80;
    printf("R$ %.2lf\n",b);
    }
else if(a>4500.00){
    c=a-2000.00;
    b=(c-2500)*0.28+80+270;
    printf("R$ %.2lf\n",b);
    }
return 0;
}
