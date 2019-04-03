//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define INF INT_MAX
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector<pii>adj[MX];
vector <int> Dist;

int dijkstra(int source, int stop)
{
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            pii c = adj[u][i];
            int v = c.first;
            int w = c.second;

            if(Dist[v] > Dist[u]+w)
            {
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }

    if(Dist[stop]==INF) return -1;
    else return Dist[stop];
}

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n, m;
        scanf("%d %d", &n, &m);;
        Clear(adj);

        for(int i=1; i<=m; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        Dist.assign(n+1,INF);
        int ans = dijkstra(1,n);

        if(ans != -1) printf("Case %d: %d\n",ca, ans);
        else printf("Case %d: Impossible\n",ca);
    }
    return 0;
}

