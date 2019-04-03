#include<stdio.h>
int main()
{
long long t,i,A,B,C,a,b,c;
scanf("%lld",&t);
for(i=1;i<=t;i++){
    scanf("%lld%lld%lld",&A,&B,&C);

    if(A==0&&B==0&&C==0) break;
        if(A>B&&A>C){
            a=A;
            b=B;
            c=C;
        }
        else if(B>A&&B>C){
            a=B;
            b=A;
            c=C;
        }
        else{
            a=C;
            b=B;
            c=A;
        }
    if(a*a==b*b+c*c)
        printf("Case %lld: yes\n",i);
    else
        printf("Case %lld: no\n",i);
    }
return 0;
}
