//@Anik_Modak
#include<bits/stdc++.h>
#define MX 2*100005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
vector<int> cost[MX];
int level[MX];
bool vis[MX];

int bfs(int source)
{
    queue <int> vc;
    vector<int> v;

    int a,b;
    vis[source]=1;
    vc.push(source);
    v.pb(source);

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            level[a]++;
            b=adj[a][i];
            if(vis[b]==0){
                vis[b]=1;
                v.pb(b);
                vc.push(b);
            }
        }
    }
    for(int i=0; i<v.size(); i++)
        if(level[v[i]]!=2) return 0;

    return 1;
}

int main()
{
    int n,m;
    cin>>n>>m;
    clear(adj);
    int a,b;

    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    mem(vis,0);

    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0) ans=ans+bfs(i);
    }
    cout<<ans<<endl;
}

