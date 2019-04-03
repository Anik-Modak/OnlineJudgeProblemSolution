//Anik_Modak
#include<bits/stdc++.h>
#define MX 30
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector <int> g[MX], gr[MX];
vector<bool> vis;
vector<int> order,comp;

void dfs1(int s)
{
    vis[s] = 1;
    for(int u : g[s])
        if(!vis[u])
            dfs1(u);
    order.push_back(s);
}

void dfs2(int s)
{
    vis[s] = 1;
    comp.push_back(s);
    for(int u : gr[s])
        if(!vis[u])
            dfs2(u);
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m, cas=0;
    while(cin>>n>>m)
    {
        if(n==0 && m==0) break;
        if(cas) cout<<endl;
        printf("Calling circles for data set %d:\n",++cas);

        Clear(g);
        Clear(gr);
        order.clear();
        comp.clear();

        int id=0;
        map<string,int>mp;
        map<int,string>ms;

        for (int i=0; i<m; i++)
        {
            string a, b;
            cin>>a>>b;

            if(!mp[a])
            {
                mp[a]=++id;
                ms[id]=a;
            }
            if(!mp[b])
            {
                mp[b]=++id;
                ms[id]=b;
            }

            g[mp[a]].push_back (mp[b]);
            gr[mp[b]].push_back (mp[a]);
        }

        vis.assign (n+1, false);
        for (int i=1; i<=n; ++i)
            if (!vis[i])
                dfs1(i);
        reverse(order.begin(), order.end());

        vis.assign (n+1, false);
        for (int i=0; i<order.size(); i++)
        {
            int v = order[i];
            if (!vis[v]) dfs2 (v);

            for(int j=0; j<comp.size(); j++)
            {
                if(j==comp.size()-1)
                    cout<<ms[comp[j]]<<endl;
                else
                    cout<<ms[comp[j]]<<", ";
            }
            comp.clear();
        }
    }
    return 0;
}
