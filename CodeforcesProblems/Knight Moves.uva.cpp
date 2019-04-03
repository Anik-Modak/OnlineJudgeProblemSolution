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

int bfs(int source, int stop)
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
            if(b==stop) return level[b];
        }
    }
    return 0;
}

void fn()
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            int p=j+8*i;

            if(j<8)
            {
                adj[p].push_back(p+1);
                adj[p+1].push_back(p);
            }
            if(i<8)
            {
                adj[p].push_back(p+8);
                adj[p+8].push_back(p);
            }
            if(i>0)
            {
                adj[p].push_back(p-8);
                adj[p-8].push_back(p);
            }
            if(j>0)
            {
                adj[p].push_back(p-1);
                adj[p-1].push_back(p);
            }
        }
    }
}
int main()
{
    char c1, c2;
    int r1, r2;
    fn();

    while(cin>>c1>>r1>>c2>>r2)
    {
        int p = (r1-1)*8+(c1-'a');
        int q = (r2-1)*8+(c2-'a');

        cout<<p<<" "<<q<<endl;

        mem(vis,0);
        cout<<bfs(p,q)<<endl;
    }
}

