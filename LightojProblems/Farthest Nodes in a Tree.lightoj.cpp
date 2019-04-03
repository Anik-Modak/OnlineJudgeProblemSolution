//Anik_Modak
#include<bits/stdc++.h>
#define N 30005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < N; i++) x[i].clear();
#define pb(x) push_back(x)
using namespace std;

bool vis[N];
vector<int> cost[N];
vector<int> adj[N];
int Left[N],Right[N],mx=0;

int dfs(int u)
{
	vis[u] = true;

	for(int i=0; i<adj[u].size(); i++)
    {
        int v=adj[u][i];
        if(!vis[v])
		{
			int total = cost[u][i] + dfs(v);

			if(total >= Left[u])
			{
				Right[u] = Left[u];
				Left[u] = total;
			}
			else if(total > Right[u])
			{
				Right[u] = total;
			}
		}
		//cout<<Left[u]<<" "<<Right[u]<<endl;
    }
    mx = max(Left[u] + Right[u] , mx);
    return Left[u];
}

int main()
{
    int t,ca;
    cin>>t;

    for(ca=1;ca<=t;ca++)
    {
        int n,a,b,c;
        mx=0;
        mem(Left,0);
        mem(Right,0)
        mem(vis,0)

        cin>>n;
        n--;
        while(n--)
        {
            cin>>a>>b>>c;
            adj[a].pb(b);
            adj[b].pb(a);
            cost[a].pb(c);
            cost[b].pb(c);
        }
        dfs(0);
		clear(adj);
		clear(cost);

        printf("Case %d: %d\n",ca,mx);
    }
}




