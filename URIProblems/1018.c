#include <stdio.h>

int main() {
int a,b,c,d,e,f,g,n,m,o,p,q,r;
scanf("%d",&n);
printf("%d\n",n);
a=n/100;
printf("%d nota(s) de R$ 100,00\n",a);
m=n%100;
b=m/50;
printf("%d nota(s) de R$ 50,00\n",b);
o=m%50;
c=o/20;
printf("%d nota(s) de R$ 20,00\n",c);
p=o%20;
d=p/10;
printf("%d nota(s) de R$ 10,00\n",d);
q=p%10;
e=q/5;
printf("%d nota(s) de R$ 5,00\n",e);
r=q%5;
f=r/2;
printf("%d nota(s) de R$ 2,00\n",f);
g=r%2;
printf("%d nota(s) de R$ 1,00\n",g);
return 0;
}
