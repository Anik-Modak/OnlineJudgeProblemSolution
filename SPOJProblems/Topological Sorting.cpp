//Anik_Modak
#include<bits/stdc++.h>
#define MX 10005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX], ans;
int InDegree[MX];
set<int>ver;

int main(void)
{
    int n, m;
    scanf("%d %d",&n,&m);
    mem(InDegree,0);

    for(int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        InDegree[b]++;
    }

    for(int i = 1; i <= n; i++)
        if (InDegree[i] == 0) ver.insert(i);

    while(!ver.empty())
    {
        int  v = *ver.begin();
        ver.erase(ver.begin());
        ans.push_back(v);

        for(int i = 0; i < adj[v].size(); i++)
        {
            int to = adj[v][i];
            InDegree[to]--;
            if (InDegree[to] == 0)
               ver.insert(to);
        }
    }

    if (ans.size() < n)
        printf("Sandro fails.");
    else
        for(int i = 0; i < ans.size(); i++)
            printf("%d ",ans[i]);
    printf("\n");

    return 0;
}
