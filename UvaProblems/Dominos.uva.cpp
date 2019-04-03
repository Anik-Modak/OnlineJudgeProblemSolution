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

vector <int> adj[MX], fin;
bool vis[MX];

void dfs_fin(int v)
{
	vis[v] = true;
	for (auto to : adj[v])
		if (!vis[to]) dfs_fin(to);
    fin.push_back(v);
}

void dfs(int v)
{
	vis[v] = true;
	for (auto to : adj[v])
		if (!vis[to]) dfs(to);
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t, cas=0;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        Clear(adj);
        fin.clear();

        for(int i=1; i<=m; i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
        }

        mem(vis,0);
        for( int i = 1 ; i <= n ; i++ )
            if(!vis[i]) dfs_fin(i);

        reverse(fin.begin(),fin.end());

        int ans = 0;
        mem(vis,0);

        for(int i=0; i<fin.size(); i++)
        {
            if(!vis[fin[i]])
            {
                dfs(fin[i]);
                ++ans;
            }
        }
        cout<<ans<<endl;
    }
}



