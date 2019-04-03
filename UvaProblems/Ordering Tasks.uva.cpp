//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
int level[MX];
int ans[MX];
bool vis[MX];

void bfs(int source)
{
    queue <int> vc;
    int a,b;
    vis[source]=1;
    level[source]=1;
    vc.push(source);

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0;i<adj[a].size();i++){
            b=adj[a][i];
            if(vis[b]==0){
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
            }
            if(ans[b]<level[b]) ans[b]=level[b];
        }
    }
    return;
}
int main()
{
    int n,m;
    //freopen("input.txt","r",stdin);
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0) break;
        clear(adj);
        mem(ans,0);
    	int a,b;

        for(int i=1; i<=m; i++)
    	{
        	cin>>a>>b;
        	adj[a].pb(b);
    	}
        for(int i=1; i<=n; i++)
        {
            mem(vis,0);
            bfs(i);
        }
        for(int i=1; i<=n; i++)
        {
            int mn=1000,id;
            for(int j=1; j<=n; j++)
            {
                if(mn>=ans[j]){
                    mn=ans[j];
                    id=j;
                }
            }
           // cout<<id<<" "<<ans[id]<<endl;
            if(i==n) cout<<id<<endl;
            else cout<<id<<" ";
            ans[id]=1005;
        }
    }
}

