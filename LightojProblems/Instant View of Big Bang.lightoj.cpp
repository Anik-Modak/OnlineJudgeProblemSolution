//Anik_Modak
#include<bits/stdc++.h>
#define MX 1005
#define INF  1000000;
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x) for(int i = 0; i < MX; i++) x[i]=INF;
#define pii pair<int,int>
#define pb(x) push_back(x)
#define input() freopen("input.txt","r",stdin)
using namespace std;

int dis[MX];
vector<int>adj[MX], ans;
bool vis[MX];

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init()
{
    Clear(adj);
    set(dis);
    mem(vis,0);
    ans.clear();
}

struct Edge
{
    int a, b, c;
} edge[2*MX];

void dfs(int u)
{
    vis[u]=1;
    ans.pb(u);
    for(auto v: adj[u])
        if(!vis[v])
            dfs(v);
}

bool BellmanFord(int V, int E)
{
    for(int i = 1; i < V; i++)
    {
        for(int j = 0; j < E; j++)
        {
            int u = edge[j].a;
            int v = edge[j].b;
            int w = edge[j].c;

            if (dis[u] + w < dis[v])
                dis[v] = dis[u] + w;
            //cout<<v<<" "<<dis[v]<<endl;
        }
    }

    bool ck=0;
    for(int i = 0; i < E; i++)
    {
        int u = edge[i].a;
        int v = edge[i].b;
        int w = edge[i].c;

        if (dis[u] + w < dis[v])
        {
            //cout<<u<<endl;
            ck=1;
            dis[v] = dis[u] + w;
            if(!vis[u]) dfs(u);
        }
    }
    return ck;
}

int main()
{
    //input();
    faster();
    int t, cas=0;
    cin>>t;

    while(t--)
    {
        init();
        int V, E;
        cin>>V>>E;

        for(int i=0; i<E; i++)
        {
            int u, v, w;
            cin>>u>>v>>w;

            edge[i].a=v;
            edge[i].b=u;
            edge[i].c=w;
            adj[v].pb(u);
        }

        cout<<"Case "<<++cas<<":";
        if(BellmanFord(V,E))
        {
            sort(ans.begin(),ans.end());
            for(int i=0; i<ans.size(); i++)
                cout<<" "<<ans[i];
            cout<<endl;
        }
        else
            cout<<" impossible"<<endl;
    }
}
