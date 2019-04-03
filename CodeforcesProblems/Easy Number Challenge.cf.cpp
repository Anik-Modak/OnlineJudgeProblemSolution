//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
#define ll long long
#define mod 1073741824
using namespace std;

int mp[MX] = {0};
void divisor()
{
    for(int i=1; i<=MX; i++)
        for(int j=i; j<=MX; j+=i)
            mp[j]++;
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    ll ans = 0;
    divisor();

    for(int i=1; i<=a; i++)
        for(int j=1; j<=b; j++)
            for(int k=1; k<=c; k++)
                ans = (ans + mp[i*j*k])%mod;

    cout<<ans<<endl;
    return 0;
}
