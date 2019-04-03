//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define INF INT_MAX
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
#define input() freopen("input.txt","r",stdin)
using namespace std;

vector<pii>adj[MX];
vector <int> Dist;

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

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
}

int main()
{
    int t, ca;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n, s, t, m;
        scanf("%d %d %d %d", &n, &s, &t, &m);

        Clear(adj);
        if(ca>1) printf("\n");

        for(int i=1; i<=m; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[b].push_back({a,c});
        }

        Dist.assign(n+1,INF);
        dijkstra(s);

        int ans = 0;
        for(int i=1; i<=n; i++)
            if(Dist[i]<=t) ans++;

        printf("%d\n",ans);
    }
    return 0;
}


