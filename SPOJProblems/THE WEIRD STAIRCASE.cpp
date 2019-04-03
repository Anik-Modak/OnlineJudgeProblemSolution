//Anik_Modak
#include<bits/stdc++.h>
#define MX 25
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

int bfs(int source, int stop)
{
    queue <int> vc;
    int a,b,ans=100;
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
            if(vis[b]==0)
            {
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
            }
            if(b==stop) ans=min(ans,level[b]);
        }
    }
    if(ans==100) return 0;
    else return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n;

        clear(adj);
        mem(level,0);
        mem(vis,0);

        for(int i=0; i<n; i++)
        {
            cin>>m;
            adj[i].pb(i+1);
            if(i+m<=n && i+m>=0) adj[i].pb(i+m);
        }
        int ans=bfs(0,n);

        if(ans) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}

