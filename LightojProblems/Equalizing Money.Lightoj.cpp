//Anik_Modak
#include<bits/stdc++.h>
#define MX 1005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
map<pair<int,int>,int>
bool vis[MX];

void bfs(int source)
{
    queue <int> vc;
    int a,b, sum=0;

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
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return ;
}

int main()
{
    freopen("input.txt","r",stdin);
    int t, ca;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        int n, m;
        cin>>n>>m;

        int tk[n+2], sum=0;
        for(int i=1; i<=n; i++)
        {
            cin>>tk[i];
            sum += tk[i];
        }

        for(int i=1; i<=m; i++)
        {
            int a, b;
            cin>>a>>b;

            adj[a].pb(b);
            adj[b].pb(a);
        }
        //cout<<sum<<" "<<n<<endl;
        if((double)(sum/n)-(sum/n) > 0)
        {
            //cout<<sum<<" "<<n<<endl;
            printf("Case %d: No\n",ca);
            continue;
        }

        mem(vis,0);
        sum /= n;

        for(int i=1; i<=n; i++)
        {
            if(vis[i]) bfs(i,tk);
        }

        int ans=1;
        for(int i=1; i<=n; i++)
        {
            if(tk[i]!=sum && vis[i]==0) ans=0;
        }

        if(ans) printf("Case %d: Yes\n",ca);
        else printf("Case %d: No\n",ca);
        clear(adj);
    }
}
