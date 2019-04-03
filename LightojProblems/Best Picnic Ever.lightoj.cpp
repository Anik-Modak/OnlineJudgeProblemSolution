//Anik_Modak
#include<bits/stdc++.h>
#define siz 10000
using namespace std;

vector <int> adj[siz];
bool vis[siz];
int cal[siz];

void bfs(int source)
{
    queue <int> vc;
    int a,b,c=0;

    memset(vis,0,sizeof vis);
    cal[source]++;
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
                vis[b]=1;
                vc.push(b);
                cal[b]++;
            }
        }
    }
}

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n,k,m;
        memset(cal,0,sizeof cal);

        for(int i=0; i < siz; i++) adj[i].clear();

        cin>>k>>m>>n;
        int arr[k],a,b;

        for(int i=0; i < k; i++) cin>>arr[i];

        while(n--)
        {
            cin>>a>>b;
            adj[a].push_back(a);
            adj[a].push_back(b);
        }

        for(int i = 0; i < k; i++) bfs(arr[i]);

        int ans=0;
        for(int i=1; i<=m; i++)
        {
            if(cal[i]==k) ans++;
        }
        printf("Case %d: %d\n",ca,ans);
    }
}
