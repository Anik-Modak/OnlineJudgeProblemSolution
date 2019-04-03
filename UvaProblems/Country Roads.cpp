//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define INF INT_MAX
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector<pii>adj[MX];
vector <int> Dist;
bool vis[MX];

void dijkstra(int source)
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
    int t, cas=0;
    cin>>t;

    while(t--)
    {
        Clear(adj);
        int n, m;
        scanf("%d %d", &n, &m);

        for(int i=1; i<=m; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        int source;
        scanf("%d",&source);

        Dist.assign(n+1,INF);
        printf("Case %d:\n",++cas);
        dijkstra(source);

        for(int i=0; i<n; i++)
        {
            int ans = Dist[i];
            if(ans==INF) printf("Impossible\n");
            else printf("%d\n",ans);
        }
    }
    return 0;
}

