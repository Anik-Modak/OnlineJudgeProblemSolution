//Anik_Modak
#include <bits/stdc++.h>
#define MX 10005
using namespace std;

vector<int> adj[MX];
bool vis[MX], AP[MX];
int par[MX], tim, low[MX], high[MX];

void ini()
{
    for(int i=0; i<MX; i++)
    {
        vis[i]=AP[i]=false;
        par[i]=-1;
        adj[i].clear();
    }
    tim=0;
}

void dfs(int u)
{
    vis[u]=true;
    low[u]=high[u]=(++tim);
    int child=0;

    for(int v : adj[u])
    {
        if(vis[v]==false)
        {
            child++;
            par[v]=u;
            dfs(v);

            low[u]=min(low[u],low[v]);
            if((par[u]!=-1) && (low[v]>=high[u]) )
                AP[u]=true;
            if((par[u]==-1) && (child>1))
                AP[u]=true;
        }
        else if(v!=par[u])
        {
            low[u]=min(low[u],high[v]);
        }
    }
}

int main()
{
    int t, cas=0;
    cin>>t;

    while(t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        ini();

        while(m--)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        dfs(1);
        int ans = 0;
        for(int i = 1; i <= n; i++)
            if(AP[i]) ans++;

        printf("Case %d: %d\n",++cas, ans);
    }
    return 0;
}

