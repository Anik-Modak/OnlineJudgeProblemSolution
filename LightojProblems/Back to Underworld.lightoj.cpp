//Anik_Modak
#include<bits/stdc++.h>
#define siz 20005
using namespace std;

vector <int> adj[siz];
int level[siz];
bool vis[siz];

int bfs(int source)
{
    queue <int> vc;
    int a,b,c;
    level[source]=0;
    vis[source]=1;
    vc.push(source);

    int even=1,odd=0;
    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0;i<adj[a].size();i++)
        {
            b=adj[a][i];
            if(vis[b]==0)
            {
                level[b]=level[a]+1;
                if(level[b]%2) odd++;
                else even++;
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return max(even,odd);
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t,ca,n;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n,a,b;
        memset(vis,0,sizeof vis);
        cin>>n;

        while(n--)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        long long ans=0;
        for(int i = 0; i < siz; i++)
        {
			if(!adj[i].empty() && vis[i]==0) ans+=bfs(i);
		}

		for(int i = 0; i < siz; i++) adj[i].clear();
        printf("Case %d: %lld\n",ca,ans);
    }
}



