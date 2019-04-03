//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

map<int,string>ver;
vector <int> adj[MX];
int p[MX];
bool vis[MX];

void bfs(int source, int stop)
{
    queue <int> vc;
    vis[source]=1;
    p[source]=-1;
    vc.push(source);

    while(!vc.empty())
    {
        int a, b;
        a=vc.front();
        vc.pop();

        for(auto b : adj[a])
        {
            if(vis[b]==0)
            {
                vis[b]=1;
                vc.push(b);
                p[b]=a;
            }
        }
    }

    if (!vis[stop])
    {
        cout << "No route\n";
    }
    else
    {
        vector<int> path;
        for (int v = stop; v != -1; v = p[v])
            path.push_back(v);

        reverse(path.begin(), path.end());

        for(int v : path)
        {
            if(p[v]!=-1)
                cout<<ver[p[v]]<<" "<<ver[v]<<endl;
        }
    }
    return;
}

int main()
{
    int n, cas=0;
    while(cin>>n)
    {
        if(cas)
            cout<<endl;

        int id=0;
        Clear(adj);
        map<string,int>mp;
        ver.clear();

        for(int i=0; i<n; i++)
        {
            string a, b;
            cin>>a>>b;

            if(!mp[a])
            {
                mp[a]= ++id;
                ver[id]=a;
            }
            if(!mp[b])
            {
                mp[b]= ++id;
                ver[id]=b;
            }

            adj[mp[a]].pb(mp[b]);
            adj[mp[b]].pb(mp[a]);
        }

        string start, stop;
        cin>>start>>stop;

        if (!mp[start] || !mp[stop])
        {
            cout << "No route\n";
        }
        else
        {
            mem(vis,0);
            bfs(mp[start],mp[stop]);
            cas++;
        }
    }
    return 0;
}
