//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin>>n>>m>>k;

    int a[n+1], p[n], c;
    for(int i=1; i<=n; i++)
        cin>>a[i];

    map<int, int> mp;
    for(int i=1; i<=n; i++)
    {
        cin>>p[i];
        if(a[i]>mp[p[i]])
            mp[p[i]] = a[i];
    }

    int ans = 0;
    for(int i=0; i<k; i++)
    {
        cin>>c;
        if(a[c]<mp[p[c]]) ans++;
    }
    cout<<ans<<endl;
}

