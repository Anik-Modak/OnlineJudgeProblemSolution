//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx = 0;
    cin>>n;

    map<string, int> mp;
    string s, ans;

    while(n--)
    {
        cin>>s;
        mp[s]++;
    }

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(mx<it->second)
        {
            mx = it->second;
            ans = it->first;
        }
    }
    cout<<ans<<endl;

    return 0;
}

