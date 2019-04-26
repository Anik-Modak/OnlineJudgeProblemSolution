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

void bfs(int source)
{
    queue <int> vc;
    int a,b,c;

    level[source]=-1;
    vis[source]=1;
    vc.push(source);

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0;i<adj[a].size();i++)
        {
            b=adj[a][i];
            if(vis[b]==0)
            {
                if(level[a]==1) level[b]=-1;
                else level[b]=1;
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return ;
}

int main()
{
    int t,ca;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n,m;
        cin>>n>>m;

        mem(level,0);
        mem(vis,0);
        clear(adj);
        vector<pair<int,int> >pr;

        for(int i=1; i<=m; i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
            pr.push_back(make_pair(a,b));
        }
        for(int i=1; i<=n; i++)
            if(vis[i]==0) bfs(i);

        int ans=1;
        for(int i=0; i<m; i++)
            if(level[pr[i].first]==level[pr[i].second]) ans=0;

        printf("Scenario #%d:\n",ca);
        if(ans==0) printf("Suspicious bugs found!\n");
        else printf("No suspicious bugs found!\n");
    }
    return 0;
}



