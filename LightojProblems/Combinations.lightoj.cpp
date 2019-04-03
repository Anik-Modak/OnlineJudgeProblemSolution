#include<bits/stdc++.h>
using namespace std;

long long mod=1000003, f[1000005]={1};
long long pow(long long a,long long b)
{
    long long x=1, y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}

void fact()
{
    f[1]=1;
    for (int i=2; i<=1000000;i++)
        f[i]=(f[i-1]*i)%mod;
}

long long ncr(int n, int r)
{
    return (f[n]*((pow(f[r],mod-2) * pow(f[n-r], mod-2)) % mod)) % mod;
}

int main()
{
    int t,n,ca,r;
    cin>>t;
    fact();
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d %d",&n,&r);
        long long ans=ncr(n,r);

        printf("Case %d: %lld\n",ca,ans);
    }
}

