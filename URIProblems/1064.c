#include<stdio.h>
int main()
{
double a,b,c,d,e,f,n1,n2,n3,n4,n5,n6,avg;
int s=0;
scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
if(a>0){
    n1=a;
    s=s+1;}
if(b>0){
    n2=b;
    s=s+1;}
if(c>0){
    n3=c;
    s=s+1;}
if(d>0){
    n4=c;
    s=s+1;}
if(e>0){
    n5=e;
    s=s+1;}
if(f>0){
    n6=f;
    s=s+1;}
printf("%d valores positivos\n",s);
avg=(n1+n2+n3+n4+n5+n6)/s;
printf("%.1lf\n",avg);
return 0;
}
