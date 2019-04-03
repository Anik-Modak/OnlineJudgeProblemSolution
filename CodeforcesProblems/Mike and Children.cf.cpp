//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int s = a[i] + a[j];
            mp[s]++;
        }
    }

    int ans = 0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
        ans = max(ans, it->second);

    cout<<ans<<endl;
}
