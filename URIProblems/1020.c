#include <stdio.h>

int main() {
int d,e,x,y,z;
scanf("%d",&d);
x=d/365;
printf("%d ano(s)\n",x);
e=d%365;
y=e/30;
printf("%d mes(es)\n",y);
z=e%30;
printf("%d dia(s)\n",z);

    return 0;
}


