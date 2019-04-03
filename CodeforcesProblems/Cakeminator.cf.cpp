//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    string s[11];
    for(int i=0; i<n; i++)
        cin>>s[i];

    int vis[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            vis[i][j] = 0;

    for(int i=0; i<n; i++)
    {
        int ck = 1;
        for(int j=0; j<m; j++)
            if(s[i][j]=='S')
                ck =0;
        if(ck)
        {
            for(int j=0; j<m; j++)
                vis[i][j] = 1;
        }
    }

    for(int i=0; i<m; i++)
    {
        int ck = 1;
        for(int j=0; j<n; j++)
            if(s[j][i]=='S')
                ck =0;
        if(ck)
        {
            for(int j=0; j<n; j++)
                vis[j][i] = 1;
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(vis[i][j]) ++ans;

    cout<<ans<<endl;
}


