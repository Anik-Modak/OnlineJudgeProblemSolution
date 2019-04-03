#include<stdio.h>
int main()
{
    int a,b,n,k,x,s=0;
    scanf("%d%d",&n,&k);
        x=n;
        l:a=n/k;
        b=n%k;
        x=x+a;
        if(a>0){
            n=a+b;
            goto l;
        }
    printf("%d\n",x);
    return 0;
}
