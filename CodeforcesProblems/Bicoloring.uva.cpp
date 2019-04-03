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
    int a, b;
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
            if(level[a]==level[b]) return 0;
        }
    }
    return 1;
}

int main()
{

    int n, m;
    while(cin>>n&&n!=0)
    {
        cin>>m;
        for(int i=0; i<m; i++)
        {
            int a, b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }

        mem(vis,0);
        int ans = bfs(0);

        if(ans) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
        clear(adj);
    }
}
