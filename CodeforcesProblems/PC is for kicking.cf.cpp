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
int level[MX];
bool vis[MX];

int bfs(int source)
{
    queue <int> vc;
    int a, b, mx=0;
    level[source]=0;
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
            mx=max(mx,level[b]);
        }
    }
    return mx;
}

int main()
{
    int n,m;
    cin>>n>>m;
    mem(vis,0);

    for(int i=1; i<n; i++)
    {
        int a,b;
        cin>>a>>b;

        adj[a].pb(b);
        adj[b].pb(a);
    }
    int ans=bfs(m);
    cout<<ans+1<<endl;
}
