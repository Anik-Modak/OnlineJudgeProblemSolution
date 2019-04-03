//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<ll>v;
void Lucky(long long n)
{
    v.pb(4);
    v.pb(7);
    int len, pre = 0;
    for(ll i=10; i<=n; i *= 10)
    {
        len = v.size();
        for(int j=pre; j<len; j++)
        {
            ll val = 4*i + v[j];
            v.pb(val);
        }

        for(int j=pre; j<len; j++)
        {
            ll val = 7*i + v[j];
            v.pb(val);
        }
        pre = len;
    }
    sort(v.begin(),v.end());
}

map<ll,ll>mp;
void LuckySum(int n)
{
    mp[4] = 16;
    for(int i=1; i<n; i++)
    {
        //cout<<v[i-1]<<" "<<mp[v[i-1]]<<endl;
        mp[v[i]] = mp[v[i-1]] + v[i]*(v[i]-v[i-1]);
    }
}

int main()
{
    long long l, r;
    cin>>l>>r;

    Lucky(1000000000);
    LuckySum(v.size());

    auto il = lower_bound(v.begin(),v.end(),l);
    auto ir = lower_bound(v.begin(),v.end(),r);

    //cout<<*il<<" "<<*ir<<endl;
    ll sum1 = mp[*il]-(*il-l+1)*(*il);
    ll sum2 = mp[*ir]-(*ir-r)*(*ir);

    cout<<sum2-sum1<<endl;
    return 0;
}
