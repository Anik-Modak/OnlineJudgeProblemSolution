#include<stdio.h>
int main()
{
int n,c,a=0,g=0,d=0;
for(;;){
    scanf("%d",&n);
    if(n==4)
        break;
    else if(n==1)
        a=a+1;
    else if(n==2)
        g=g+1;
    else if(n==3)
        d=d+1;
    else
        c=1;
}
if(c=1)
    printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",a);
printf("Gasolina: %d\n",g);
printf("Diesel: %d\n",d);
return 0;
}
