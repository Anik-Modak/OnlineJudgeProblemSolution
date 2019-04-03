//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
int level[MX];
bool vis[MX];
map<int, int>mp;

void bfs(int source)
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
                mp[level[b]]++;
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return;
}

int main()
{
    int n, m;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>m;
        while(m--)
        {
            int a;
            cin>>a;
            adj[i].pb(a);
        }
    }

    int t, q;
    cin>>t;

    while(t--)
    {
        cin>>q;

        mem(vis,0);
        mem(level,0);
        bfs(q);

        int M, D, mx=0;

        if(adj[q].size())
        {
            map<int,int> ::iterator it;
            for(it=mp.begin(); it!=mp.end(); it++)
            {
                if(it->second>mx)
                {
                    M=it->second;
                    D=it->first;
                    mx=M;
                }
            }
            cout<<M<<" "<<D<<endl;
            mp.clear();
        }
        else cout<<0<<endl;
    }

}
