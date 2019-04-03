#include<bits/stdc++.h>
using namespace std;

long long mod=1000000009,f[1000000];
void fact()
{
    f[0]=1;
    f[1]=1;
    for (int i=2; i<=1000000;i++)
        f[i]=(f[i-1]*i)%mod;
}
long long pow(long long a,long long b)
{
    long long x=1,y=a;
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
long long ncr(int n, int r)
{
    return (f[n]*((pow(f[r],mod-2) * pow(f[n-r], mod-2)) % mod)) % mod;
}
long long bigmod(long long b,long long p)
{
    long long p1,p2,h;
    if(p==0) return 1;
    if(p%2==1){
        p1=b%mod;
        p2=bigmod(b,p-1)%mod;
        return (p1*p2)%mod;
    }
    else{
        h=bigmod(b,p/2)%mod;
        return (h*h)%mod;
    }
}
int main()
{
    int t,ca;
    cin>>t;
    fact();
    for(ca=1; ca<=t; ca++)
    {
        string s;
        int n,m;
        cin>>n>>m;
        long long ans,nr;
        printf("Case %d:\n",ca);
        while(m--){
            cin>>s;
            int r=s.size();
            nr=ncr(n,r);
            ans=bigmod(26,n-r);
            cout<<ans<<endl;
            ans=(ans*nr)%mod;
            cout<<ans<<endl;
        }
    }
}
