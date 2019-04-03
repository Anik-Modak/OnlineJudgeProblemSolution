#include<stdio.h>
long long reverse(long long n)
{
    long long r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main()
{
    long long n,s,i,t,a,c=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        a=n;
        c=0;
        while(1)
        {
            s=reverse(n);
            if(s==a&&c!=0) break;
            else{
                n=s+a;
                a=s+a;
                c++;
            }
        }
        printf("%lld %lld\n",c,a);
    }
    return 0;
}

