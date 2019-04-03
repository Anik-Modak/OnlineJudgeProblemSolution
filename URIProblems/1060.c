#include<stdio.h>
int main()
{
double a,b,c,d,e,f;
int s=0;
scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
if(a>0)
    s=s+1;
if(b>0)
    s=s+1;
if(c>0)
    s=s+1;
if(d>0)
    s=s+1;
if(e>0)
    s=s+1;
if(f>0)
    s=s+1;
printf("%d valores positivos\n",s);
return 0;
}
