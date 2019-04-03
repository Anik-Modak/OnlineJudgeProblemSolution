//Anik_Modak
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long bigmod(long long a,long long b)
{
    if(b==0) return 1;

    if(b%2==0)
    {
        long long x=bigmod(a,b/2)%mod;
        return (x*x)%mod;
    }
    else return (a%mod * bigmod(a,b-1)%mod)%mod;
}

long long divisor(long long n)
{
    long long c=0;

    for(int i=1; i<=sqrt(n+1); i++)
    {
        if(i*i==n) c=(c%mod+i%mod)%mod;
        else if(n%i==0) c=(c%mod+i%mod+(n/i)%mod)%mod;
    }
    return c%mod;
}
int main()
{
    int ca,t;

    freopen("input.txt","r",stdin);
    cin>>t;

    int n,m;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d",&n,&m);
        long long p=bigmod(n,m),ans;
        cout<<p<<endl;

        ans=divisor(p);
        printf("Case %d: %lld\n",ca,ans);
    }
}
