//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, m, d;
    cin>>n>>m>>d;

    long long a[n];
    vector<long long> v;
    vector<long long> ::iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());

    int cnt = 1, lim = 0;
    map<long long,int>mp;

    while(!v.empty())
    {
        it = v.begin();
        lim  = *it;
        mp[lim] = cnt;

        while((lim+d+1) <= m)
        {
            int id = lower_bound(v.begin(), v.end(), lim+d+1) - v.begin();

            if(id >= v.size()) break;
            lim = v[id];

            mp[lim] = cnt;
            v.erase(v.begin()+id);
        }
        v.erase(v.begin());
        cnt++;
    }
    cout<<cnt-1<<endl;

    for(int i=0; i<n; i++)
        cout<<mp[a[i]]<<" ";
}
