//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

int ch=0;
vector <int> adj[MX], fin;
bool vis[MX], tmp[MX];

void dfs_fin(int v)
{
    vis[v] = true;
    for (int i=0; i<adj[v].size(); i++)
    {
        int to = adj[v][i];
        if (!vis[to]) dfs_fin(to);
    }
    fin.push_back(v);
}

void dfs(int v)
{
    vis[v] = true;
    tmp[v] = true;

    for (auto to : adj[v])
    {
        if (!vis[to])
        {
            dfs(to);
        }
        else if(tmp[to]) ch = true;

    }
    tmp[v]=false;
}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
    }

    mem(vis,0);
    mem(tmp,0);
    for( int i = 1 ; i <= n && ch==false; i++ )
    {
        if(!vis[i])
        {
            par[i]=-1;
            dfs(i);
        }
    }

    if(ch)
    {
        cout<<-1<<endl;
        return 0;
    }

    mem(vis,0);
    for( int i = 1 ; i <= n ; i++ )
        if(!vis[i]) dfs_fin(i);

    reverse(fin.begin(),fin.end());

    for(int i=0; i<fin.size(); i++)
    {
        if(i==fin.size()-1) cout<<fin[i]<<endl;
        else cout<<fin[i]<<" ";
    }
    return 0;
}





