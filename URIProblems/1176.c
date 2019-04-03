#include<stdio.h>
int main()
{
    long long i,j,t,t1=0,t2=1,n,a[61];
    scanf("%lld",&n);
    for(i=0;i<=60;i++)
    {
        if(i==0){
            a[i]=t1;
            continue;
        }
        if(i==1){
            a[i]=t2;
            continue;
        }
        t=t1+t2;
        t1=t2;
        t2=t;
        a[i]=t;
    }
    for(i=0;i<n;i++)
    {
        scanf("%lld",&j);
        printf("Fib(%lld) = %lld\n",j,a[j]);
    }
}
