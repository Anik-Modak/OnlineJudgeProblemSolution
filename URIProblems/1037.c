#include<stdio.h>
int main()
{
double n;
scanf("%lf",&n);
if(n<0||n>100)
    printf("Fora de intervalo\n");
else if(0<=n&&n<=25.0)
    printf("Intervalo [0,25]\n");
else if(25.0<n&&n<=50.0)
    printf("Intervalo (25,50]\n");
else if(50<n&&n<=75)
    printf("Intervalo (50,75]\n");
else if(75<n&&n<=100)
    printf("Intervalo (75,100]\n");
return 0;
}
