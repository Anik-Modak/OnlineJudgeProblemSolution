//AnikModak
#include <bits/stdc++.h>
#define siz 205
using namespace std;

vector <int> adj[siz];
bool color[siz];

int bfs(int source)
{
    queue <int> vc;
    int a,b,c;
    color[source]=1;
    vc.push(source);

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0;i<adj[a].size();i++)
        {
            b=adj[a][i];
            if(color[b]==0)
            {
                color[b] = 1-color[a];
                vc.push(b);
            }
            else if(color[a]==color[b]) return 0;
        }
    }
    return 1;
}

int main()
{
    int n,e;
    //freopen("input.txt","r",stdin);
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;

        memset(color,0,sizeof color);
        scanf("%d",&e);

        for(int i=0; i<e;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        if(bfs(0)) cout<<"BICOLORABLE."<<endl;
		else cout<<"NOT BICOLORABLE."<<endl;

		for(int i = 0; i < siz; i++) adj[i].clear();
    }
    return 0;
}

