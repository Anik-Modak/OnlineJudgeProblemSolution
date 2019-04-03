//Anik_Modak
#include<bits/stdc++.h>
#define MX 2005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

int cnt=0;
vector <int> adj[MX], fin;
bool vis[MX];

void dfs_fin(int v)
{
    vis[v] = true;
    for (auto to : adj[v])
        if (!vis[to])
            dfs_fin(to);

    fin.push_back(v);
}

void dfs(int v)
{
    vis[v] = true;
    for (auto to : adj[v])
        if (!vis[to])
            cnt++, dfs(to);
}

int main()
{
    int n, m;
    while(cin>>n>>m)
    {
        Clear(adj);
        if(m==0 && n==0) break;

        for(int i=1; i<=m; i++)
        {
            int a, b, c;
            cin>>a>>b>>c;

            adj[a].pb(b);
            if(c==2) adj[b].pb(a);
        }

        int ck=1;
        for(int i = 1 ; i <= n ; i++ )
        {
            mem(vis,0);
            cnt=1;
            dfs(i);
            if(cnt!=n)
            {
                ck=0;
                break;
            }
        }
        cout<<ck<<endl;
    }
    return 0;
}






