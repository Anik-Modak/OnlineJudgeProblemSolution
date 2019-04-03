//Anik_Modak
#include<bits/stdc++.h>
#define MX 2*100005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];

int ch[MX];
bool vis[MX];

int bfs(int source)
{
    if(ch[0]!=source) return 0;

    mem(vis,0);
    queue <int> vc;
    int a,b,id=1;
    vis[source]=1;

    vc.push(source);
    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();

        vector<int>v;
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0)
            {
                vis[b]=1;
                v.pb(b);
            }
        }
        sort(v.begin(),v.end());

        for(int i=0; i<v.size(); id++,i++)
        {
            if(binary_search(v.begin(),v.end(),ch[id])) vc.push(ch[id]);
            else return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(int i=0; i<n; i++) cin>>ch[i];

    if(bfs(1)) puts("Yes");
    else puts("No");
}


