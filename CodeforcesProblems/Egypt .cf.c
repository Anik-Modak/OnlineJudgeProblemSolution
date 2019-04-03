#include<stdio.h>
int main()
{
long long A,B,C,a,b,c;
while(scanf("%lld%lld%lld",&A,&B,&C)!=EOF)
{
if(A==0&&B==0&&C==0) break;
    if(A>B&&A>C){
        a=A;
        b=B;
        c=C;}
    else if(B>C&&B>A){
        a=B;
        b=A;
        c=C;}
    else{
        a=C;
        b=B;
        c=A;}

    if(a*a==b*b+c*c)
        printf("right\n");
    else
        printf("wrong\n");
}
return 0;
}
