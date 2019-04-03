//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000000005
#define N 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < N; i++) x[i].clear();
#define pb(x) push_back(x)
#define ll long long
using namespace std;

bool vis[N];
vector<ll> cost[N];
vector<ll> adj[N];

ll bfs(ll source)
{
    ll  mn = MX, a = source, b;
    for(int i=0; i<adj[a].size(); i++)
    {
        b=adj[a][i];
        if(vis[b]==0)
        {
            mn=min(mn,cost[a][i]);
        }
    }
    return mn;
}

int main()
{
    int n, m, k;
    cin>>n>>m>>k;

    while(m--)
    {
        ll a, b, c;
        cin>>a>>b>>c;

        adj[a].pb(b);
        adj[b].pb(a);

        cost[a].pb(c);
        cost[b].pb(c);
    }

    mem(vis,0);
    ll ans = MX, x[k];

    for(int i=0; i<k; i++)
    {
        cin>>x[i];
        vis[x[i]] = 1;
    }
    for(int i=0; i<k; i++)
    {
        ans=min(ans,bfs(x[i]));
    }

    clear(cost);
    clear(adj);

    if(ans==MX)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;

    return 0;
}




