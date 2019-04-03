//@Anik_Modak
#include<bits/stdc++.h>
#define MX 405
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
vector<int> bus[MX];
int level[MX];
bool vis[MX];

int bfs(int source, int stop, vector<int>adj[MX])
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
    int n,m;

    while(cin>>n&&n!=0)
    {
        int a,b;
        cin>>a;
        while(cin>>b&&b!=0) adj[a].pb(b);
    }
    int q;
    while(cin>>q&&q!=0)
    {

    }
          //329610
          //1518823362

