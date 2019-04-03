//@Anik_Modak
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
vector<int> cost[MX];
int level[MX];
bool vis[MX];

int bfs(int source,int stop)
{
    queue <int> vc;
    int a,b;
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
            if(stop==b) return level[b];
        }
    }
    return 0;
}

int main()
{
    int a,t=1,ca=1;
    //freopen("input.txt","r",stdin);
    while(scanf("%d",&a)!=EOF)
    {
        int b,q;
        for(int i=1; i<=a; i++)
        {
            cin>>b;
            adj[t].pb(b);
            adj[b].pb(t);
        }
        if(t==19){
             cin>>q;

             int start,stop,ans=0;
             printf("Test Set #%d\n",ca);

             for(int i=1; i<=q; i++)
             {
                 cin>>start>>stop;
                 mem(vis,0)
                 ans=bfs(start,stop);
                 printf("%2d to %2d: %d\n",start,stop,ans);
             }
             cout<<endl;
             t=0;
             ca++;
             clear(adj);
        }
        t++;
    }
}

