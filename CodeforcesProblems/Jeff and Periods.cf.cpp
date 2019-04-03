//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    vector<int> v[100005];
    map<int, bool> ma;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v[a].push_back(i+1);
        ma[a] = true;
    }

    map<int,int> mp;
    for(auto it=ma.begin(); it!=ma.end(); it++)
    {
        int i = it->first;
        if(v[i].size() == 1) mp[i] = 0;
        else
        {
            int diff = v[i][1]-v[i][0], ck = 1;
            for(int j=2; j<v[i].size(); j++)
                if(diff != v[i][j]-v[i][j-1]) ck = 0;

            if(ck) mp[i] = diff;
        }
    }

    cout<<mp.size()<<endl;
    for(auto it= mp.begin(); it!=mp.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;

    return 0;
}
