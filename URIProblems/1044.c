#include<stdio.h>
int main()
{
int a,b;
a!=0;
scanf("%d%d",&a,&b);
if(b>a){
if(b%a==0)
    printf("Sao Multiplos\n");
else if(b%a!=0)
    printf("Nao sao Multiplos\n");
}
else if(a>b){
  if(a%b==0)
    printf("Sao Multiplos\n");
else if(a%b!=0)
    printf("Nao sao Multiplos\n");
}
return 0;
}
