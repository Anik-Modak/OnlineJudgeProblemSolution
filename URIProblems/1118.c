#include<stdio.h>
int main()
{
double n,sum=0,c=0,avg;
for(;;){
    scanf("%lf",&n);
    if(0<=n&&n<=10){
        sum=sum+n;
            c=c+1;
    }
    else{
        printf("nota invalida\n");
    }
    if(c==2){
        avg=sum/2;
        printf("media = %.2lf\n",avg);
    }

    if(n==1){
         printf("novo calculo (1-sim 2-nao)\n");
         c=0;
         sum=0;
     }
     else if(n>=2&&c>2)
        printf("novo calculo (1-sim 2-nao)\n");
    if(n==2)
        break;
}
return 0;
}
