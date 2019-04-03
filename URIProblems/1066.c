#include<stdio.h>
int main()
{
int a,b,c,d,e,t,j,n=0,i=0,s=0;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a%2==0)
    s=s+1;
if(b%2==0)
    s=s+1;
if(c%2==0)
    s=s+1;
if(d%2==0)
    s=s+1;
if(e%2==0)
    s=s+1;
printf("%d valor(es) par(es)\n",s);
t=5-s;
printf("%d valor(es) impar(es)\n",t);
if(a==0)
    n=n+1;
if(b==0)
    n=n+1;
if(c==0)
    n=n+1;
if(d==0)
    n=n+1;
if(e==0)
    n=n+1;
if(a>0)
    i=i+1;
if(b>0)
    s=s+1;
if(c>0)
    i=i+1;
if(d>0)
    i=i+1;
if(e>0)
    i=i+1;
printf("%d valor(es) positivo(s)\n",i);
j=5-n-i;
printf("%d valor(es) negativo(s)\n",j);
return 0;
}
