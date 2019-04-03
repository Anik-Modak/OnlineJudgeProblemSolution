#include <stdio.h>

int main() {
int t,p,h,m,s;
scanf("%d",&t);
h=t/3600;
p=t%3600;
m=p/60;
s=p%60;
printf("%d:%d:%d\n",h,m,s);
    return 0;
}
