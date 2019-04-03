//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n)
{
    ll ans=0,s=0,pre;
    for(ll i=1; i<=sqrt(n); i++)
    {
        pre=n/(i+1);
        s=(n/i-pre)*i;
        ans+=(s+n/i);
        if(i==n/i) ans-=i;
    }
    return ans;
}

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        ll n,ans;
        scanf("%lld",&n);

        ans=solve(n);
        printf("Case %d: %lld\n",ca,ans);
    }
    return 0;
}
