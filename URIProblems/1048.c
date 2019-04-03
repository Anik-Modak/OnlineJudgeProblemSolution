#include<stdio.h>
int main()
{
double a,b,c;
scanf("%lf",&a);
if(0<=a&&a<=400.00){
    b=a*0.15;
    c=a+b;
    printf("Novo salario: %.2lf\n",c);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: 15 %%\n");
    }
else if(400.01<=a&&a<=800.00){
    b=a*0.12;
    c=a+b;
    printf("Novo salario: %.2lf\n",c);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: 12 %%\n");
    }
else if(800.01<=a&&a<=1200.00){
    b=a*0.10;
    c=a+b;
    printf("Novo salario: %.2lf\n",c);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: 10 %%\n");
    }
else if(1200.01<=a&&a<=2000.00){
    b=a*0.07;
    c=a+b;
    printf("Novo salario: %.2lf\n",c);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: 7 %%\n");
    }
else if(a>2000.00){
    b=a*0.04;
    c=a+b;
    printf("Novo salario: %.2lf\n",c);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: 4 %%\n");
    }
return 0;
}
