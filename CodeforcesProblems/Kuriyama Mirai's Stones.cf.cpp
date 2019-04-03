//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define ll long long
using namespace std;

vector<ll> v, u;
ll sum1[MX], sum2[MX];

void solve(int n)
{
    sum1[0] = sum2[0] = 0;
    for(int i=1; i<=n; i++)
    {
        sum1[i] = sum1[i-1] + v[i-1];
        sum2[i] = sum2[i-1] + u[i-1];
    }
}

int main()
{
    int n, m;
    cin>>n;

    ll a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    u = v;
    sort(u.begin(),u.end());
    //reverse(u.begin(),u.end());

    cin>>m;
    solve(n);

    while(m--)
    {
        int t, x, y;
        cin>>t>>x>>y;

        if(t==1) cout<<sum1[y]-sum1[x-1]<<endl;
        else cout<<sum2[y]-sum2[x-1]<<endl;
    }
    return 0;
}
