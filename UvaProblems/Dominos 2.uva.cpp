//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX], fin;
bool vis[MX];

void dfs(int v)
{
	vis[v] = true;
	for (auto to : adj[v])
		if (!vis[to]) dfs(to);
}

int main()
{
    int t, cas=0;
    cin>>t;

    while(t--)
    {
        int n, m, l;
        cin>>n>>m>>l;
        Clear(adj);
        fin.clear();

        for(int i=1; i<=m; i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
        }

        int z, ans = 0;
        mem(vis,0);

        while(l--)
        {
            cin>>z;
            dfs(z);
        }

        for(int i=1; i<=n; i++)
            if(vis[i]) ans++;

        cout<<ans<<endl;
    }
}



