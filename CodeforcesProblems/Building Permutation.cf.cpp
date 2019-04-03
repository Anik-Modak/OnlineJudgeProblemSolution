//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
#define INF INT_MAX
#define input() freopen("input.txt","r",stdin)
#define mx 100005
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<ll> pos;
    vector<ll> neg;
    vector<ll> mp;

    ll a, ans = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a>n)
            pos.push_back(a);
        else if(a>0)
            mp.push_back(a);
        else
            neg.push_back(a);
    }

    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    sort(mp.begin(),mp.end());

    int i = 1;
    for(int j=0; j<neg.size(); j++)
    {
        ans += abs(neg[j]-i);
        i++;
    }

    for(int j=0; j<mp.size(); j++)
    {
        ans += abs(mp[j]-i);
        i++;
    }

    for(int j=0; j<pos.size(); j++)
    {
        ans += abs(pos[j]-i);
        i++;
    }

    cout<<ans<<endl;
    return 0;
}

