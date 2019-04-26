//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear()
#define MX 30005
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector<pii>adj[MX];
bool vis[MX];
int sum, mx, hn;

void dfs(int s, int ab[])
{
    vis[s] = true;
    for(auto u: adj[s])
    {
        if(!vis[u.first])
        {
            sum += u.second;
            dfs(u.first, ab);

            if(mx < sum)
            {
                mx = sum;
                hn = u.first;
            }
            ab[u.first] = max(ab[u.first], mx);
            sum -= u.second;
        }
    }
}

int main()
{
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        int n;
        scanf("%d",&n);

        for(int i=1; i<n; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        int mx1[MX], mx2[MX];
        mem(mx1,0);
        mem(mx2,0);

        sum = 0, mx = 0;
        mem(vis,0);
        dfs(0,mx1);

        sum = 0, mx = 0;
        mem(vis,0);
        dfs(hn,mx2);

        printf("Case %d:\n",++cas);
        for(int i=0; i<n; i++)
        {
            printf("%d\n",max(mx1[i],mx2[i]));
        }
        Clear(adj);
    }
    return 0;
}
