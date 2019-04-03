//Anik_Modak
#include<iostream>
#include<vector>
#include<algorithm>
#define MX 105
#define mem(x,y) for(int i=1; i<=MX; i++) x[i]=y;
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX], fin;
bool vis[MX];

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

int main()
{
    int n, m;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        while(cin>>m && m!=0)
            adj[i].pb(m);
    }

    mem(vis,0);
    for( int i = 1 ; i <= n ; i++ )
        if(!vis[i]) dfs_fin(i);

    reverse(fin.begin(),fin.end());

    for(int i=0; i<fin.size(); i++)
    {
        if(i==fin.size()-1)
            cout<<fin[i]<<endl;
        else
            cout<<fin[i]<<" ";
    }
    return 0;
}






