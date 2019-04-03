#include<bits/stdc++.h>
#define siz 10000
using namespace std;

vector <int> adj[siz];
int d1[siz];
int d2[siz];
bool vis[siz];

void bfs(int source,int level[])
{
    int a,b;
    queue <int> vc;
    memset(vis,0,sizeof vis);

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
        }
    }
}

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1;ca<=t;ca++)
    {
        int n,m,source,end;
        cin>>n>>m;

        for(int i = 0; i < siz; i++) adj[i].clear();

        int a,b;
        for(int i=0; i<m; i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cin>>source>>end;

        memset(d1,0,sizeof d1);
        memset(d2,0,sizeof d2);

        bfs(source,d1);
        bfs(end,d2);

        int ans=0;
        for(int i=0; i<n; i++) ans=max(ans,d1[i]+d2[i]);

        printf("Case %d: %d\n",ca,ans);
    }
}






