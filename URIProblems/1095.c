#include<stdio.h>
int main()
{
int I=1,J=60;
L:printf("I=%d J=%d",I,J);
I=I+3;
J=J-5;
printf("\n");
if(I<=60&&J>=0) goto L;
return 0;
}
