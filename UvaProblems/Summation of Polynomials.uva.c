#include<stdio.h>
int main()
{
    long long power(long long a,int n)
    {
        if(n==0) return 1;
        long long ret=power(a*a,n/2);
        if(n%2==1) ret=ret*a;
        return ret;
    }
    int i,n,m=3;
    unsigned long long s;
    while(scanf("%d",&n)!=EOF){
        s=0;
        for(i=1;i<=n;i++)
            s=s+power(i,m);
        printf("%lld\n",s);
    }
    return 0;
}
