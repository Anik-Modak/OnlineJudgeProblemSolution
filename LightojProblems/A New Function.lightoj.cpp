//Anik_Modak
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;

ull solve(ll n)
{
    ull ans=0;

    for(ll i=2; i<=sqrt(n); i++)
    {
        ll m=n/i,s1,s2;
        s1=(i-1)*i/2;
        s2=m*(m+1)/2;
        ans+=(s2-s1);
        ans+=i*(m-i);
    }
    return ans;
}

int main()
{
    int t,ca;
   // freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        long long n;
        scanf("%lld",&n);

        ull ans = solve(n);
        printf("Case %d: %llu\n",ca,ans);
    }
    return 0;
}

