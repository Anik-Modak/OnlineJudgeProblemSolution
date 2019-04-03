//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
bool vis[MX];

void dfs(int v)
{
	vis[v] = true;
	for (auto to : adj[v])
		if (!vis[to]) dfs(to);
}

int main()
{
    int n, m, ck = 0;
    scanf("%d %d",&n, &m);

    vector<int>v[m+2];
    for(int i=1; i<=n; i++)
    {
        int a, b;
        scanf("%d",&a);
        while(a--)
        {
            scanf("%d",&b);
            v[b].push_back(i);
            ck = 1;
        }
    }

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<v[i].size(); j++)
        {
            int a = v[i][0], b = v[i][j];
            adj[a].pb(b);
            adj[b].pb(a);
        }
    }

    int ans = 0;
    mem(vis,false);

    for(int i=1; i<=n; i++)
    {
      if(vis[i]==false)
      {
          dfs(i);
          ans++;
      }
    }
    if(ck) ans--;

    printf("%d\n",ans);
    return 0;
}




