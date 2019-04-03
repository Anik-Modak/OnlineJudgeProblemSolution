//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

bool cmp(pii a, pii b)
{
    if(a.first==b.first)
        return a.second<b.second;
    else
        return a.first>b.first;
}

int main()
{
    int n, k;
    cin>>n>>k;

    vector<pii> v;
    map<pii,int> mp;

    for(int i=0; i<n; i++)
    {
        int p, t;
        cin>>p>>t;
        v.push_back({p,t});
        mp[{p,t}]++;
    }

    sort(v.begin(),v.end(),cmp);
    pii id = v[k-1];

    cout<<mp[id]<<endl;
    return 0;
}


