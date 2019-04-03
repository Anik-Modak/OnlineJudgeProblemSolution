#include<stdio.h>
int main(){
int n,i,a,b=0;
printf("First last and differance: ");
scanf("%d%d%d",&a,&n,&i);
printf("0");
L1:
b=b+a;
printf("%+d",a);
a=a+i;
if(a<=n)goto L1;
printf("= %d\n",b);
return 0;
}
