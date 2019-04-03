//Anik_Modak
#include<bits/stdc++.h>
#define MX 2005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
int level[MX];
bool vis[MX];

int bfs(int source)
{
    queue <int> vc;
    int a,b,mx=0;
    level[source]=1;
    vis[source]=1;

    vc.push(source);
    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0){
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
            }
            if(mx<level[b]) mx=level[b];
        }
    }
    return mx;
}

int main()
{
    int n;
    cin>>n;
    clear(adj);
    int a;

    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(a>0) adj[a].pb(i);
    }
    mem(vis,0);

    int ans=1;
    for(int i=1; i<=n; i++)
    {
        mem(vis,0);
        ans=max(ans,bfs(i));
    }
    cout<<ans<<endl;
}
