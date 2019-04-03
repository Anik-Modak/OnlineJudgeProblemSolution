#include<stdio.h>
int main(){
    int a,b,c,m,m1,s;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        m=a;
    else if(b>c)
        m=b;
    else
        m=c;
    if(a<b&&a<c)
        m1=a;
    else if(b<c)
        m1=b;
    else
        m1=c;
   s=(m-m1);
   printf("%d\n",s);
    return 0;
}
