//Anik_Modak
#include<bits/stdc++.h>
#define MX 20005
#define INF INT_MAX
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector<pii>adj[MX];
vector <int> Dist;
bool vis[MX];

void dijkstra(int source, int ends)
{
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();
        //vis[u]= true;

        for(auto c : adj[u])
        {
            int v = c.first;
            int w = c.second;

            if(Dist[v] > Dist[u]+w)
            {
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
    return;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t, cas=0;
    cin>>t;

    while(t--)
    {
        Clear(adj);
        int n, m, s, t;
        scanf("%d %d %d %d", &n, &m, &s, &t);

        for(int i=1; i<=m; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        Dist.assign(n+1,INF);
        dijkstra(s,t);

        int ans = Dist[t];
        if(ans==INF) printf("Case #%d: unreachable\n",++cas);
        else printf("Case #%d: %d\n",++cas,ans);
    }
    return 0;
}

