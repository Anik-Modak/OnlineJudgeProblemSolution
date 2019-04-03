#include<stdio.h>
digit(long long n)
{
    long long s,r;
    s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    return s;
}
int main()
{
    long long n,t,i,j,s,min=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        min=0;
        for(j=n-100;j<=n;j++){
            s=digit(j);
            if(n==j+s){
                min=j;
                break;
           }
        }
        if(min==0)
            printf("%lld\n",min);
        else
            printf("%lld\n",min);
    }
    return 0;
}
