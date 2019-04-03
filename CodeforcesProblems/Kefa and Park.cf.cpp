//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
bool cat[MX];
int level[MX];
int path[MX];
bool vis[MX];

int bfs(int source,int m)
{
    queue <int> vc;
    int a, b, cnt=0;
    vis[source]=1;
    if(cat[source]) level[source]=1;
    path[source]=level[source];

    vc.push(source);
    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        bool ch=1;

        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0)
            {
                vis[b]=1;
                vc.push(b);
                if(cat[b]) level[b]=level[a]+1;
                path[b]=max(path[a],level[b]);
                ch=0;
            }
        }
        //cout<<a<<" "<<adj[a].size()<< " "<<path[a]<<endl;
        if(ch && path[a] <= m ) cnt++;
    }
    return cnt;
}

int main()
{
    int n,m;
    cin>>n>>m;
    clear(adj);
    int a, b;

    for(int i=1; i<=n; i++) cin>>cat[i];

    for(int i=1; i<n; i++)
    {
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    mem(vis,0);
    mem(level,0);

    int ans=bfs(1,m);
    cout<<ans<<endl;
}

