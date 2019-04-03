#include<stdio.h>
int main()
{
float n,sum=0,c,avg;
for(c=0;c<2;){
    scanf("%f",&n);
     if(0<=n&&n<=10){
     sum=sum+n;
     c=c+1;}
    else
    printf("nota invalida\n");
}
avg=sum/2;
printf("media = %.2f\n",avg);
return 0;
}
