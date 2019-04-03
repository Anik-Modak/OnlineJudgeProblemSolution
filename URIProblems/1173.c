#include<stdio.h>
int main()
{
int i,x,N[10];
scanf("%d",&x);
for(i=0;i<=9;i++){
    printf("N[%d] = %d\n",i,x);
    x=x+x;
    }
return 0;
}
