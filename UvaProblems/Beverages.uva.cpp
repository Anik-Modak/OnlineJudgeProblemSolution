//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define allclear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector<int> adj[MX];
queue<int> ans;

int deg[MX];
bool vis[MX];

void bfs(int n)
{
    queue <int> vc;
    for(int i=1; i<=n; i++)
        if(deg[i]==0)
        {
            vc.push(i);
            break;
        }
    int a,b;

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        ans.push(a);
        vis[a]=1;

        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            deg[b]--;
        }
        if(vc.empty())
        {
            for(int i=1; i<=n; i++)
            {
                if(deg[i]==0&&vis[i]==0)
                {
                    vc.push(i);
                    break;
                }
            }
        }
    }
}

int main()
{
    int n,ca=0;
    map<string,int>mp;
    vector<string>vs;

    while(cin>>n)
    {
        mem(deg,0);
        mem(vis,0);

        while(n--)
        {
            string s;
            cin>>s;
            vs.push_back(s);
        }
        int m,ln=vs.size();
        //sort(vs.begin(),vs.end());
        for(int i=0; i<ln; i++) mp[vs[i]]=i+1;

        cin>>m;
        string a,b;
        getchar();

        for(int i=1; i<=m; i++)
        {
            cin>>a>>b;
            adj[mp[a]].pb(mp[b]);
            deg[mp[b]]++;
        }
        for(int i=1; i<=ln; i++)
            sort(adj[i].begin(),adj[i].end());

        printf("Case #%d: Dilbert should drink beverages in this order:",++ca);

        bfs(ln);
        while(!ans.empty())
        {
            cout<<" "<<vs[ans.front()-1];
            ans.pop();
        }
        cout<<".\n\n";
        mp.clear();
        vs.clear();
        allclear(adj);
    }
}
