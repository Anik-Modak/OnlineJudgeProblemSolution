//@Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
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

void bfs(int source, int stop)
{
    queue <int> vc;
    int a,b,c=0;
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
            if(vis[b]==0&&stop>=level[a]+1){
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return ;
}

int main()
{
    int n,ca=0;
    while(1)
    {
	cin>>n;
	if(n==0) break;

	clear(adj);
	mem(vis,0);

	int a,b;
	vector<int>v;
	for(int i=1; i<=n; i++)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);

		if(vis[a]==0){
			v.pb(a);
			vis[a]=1;
		}
		if(vis[b]==0){
			v.pb(b);
			vis[b]=1;
		}

	}
	int start,stop;
	while(1)
	{
		cin>>start>>stop;
		if(start==0&&stop==0) break;

		mem(vis,0);
		bfs(start,stop);

		int ans=0;
		for(int i=0; i<v.size(); i++) if(vis[v[i]]==0) ans++;

		printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++ca,ans,start,stop);
	}
    }
}


