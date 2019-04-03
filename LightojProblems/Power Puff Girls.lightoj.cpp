#include<bits/stdc++.h>
#define siz 10000
using namespace std;

vector <int> adj[siz];
int level[siz];
bool vis[siz];

int bfs(int source,int end)
{
    queue <int> vc;
    int a,b,c;

    level[source]=0;
    vis[source]=1;
    vc.push(source);

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0;i<adj[a].size();i++)
        {
            b=adj[a][i];

            if(vis[b]==0){
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
            }
            if(b==end) return level[b];
        }
    }
    return 0;
}
int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        int n,m,source,end;

        //memset(vis,0,sizeof vis);
        for(int i = 0; i < siz; i++) adj[i].clear();

        cin>>n>>m;
        string s[n+20];
        for(int i=0; i<n; i++) cin>>s[i];

        vector<int>v;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int p=j+m*i;

                if(s[i][j]=='#'||s[i][j]=='m') continue;
                else if(s[i][j]=='a'||s[i][j]=='b'||s[i][j]=='c') v.push_back(p);
                else if(s[i][j]=='h') end=p;

                if(j<m&&!(s[i][j+1]=='#'||s[i][j+1]=='m'))
                {
                        adj[p].push_back(p+1);
                        adj[p+1].push_back(p);
                }
                if(i<n&&!(s[i+1][j]=='#'||s[i+1][j]=='m'))
                {
                        adj[p].push_back(p+m);
                        adj[p+m].push_back(p);
                }
                if(i>0&&!(s[i-1][j]=='#'||s[i-1][j]=='m'))
                {
                        adj[p].push_back(p-m);
                        adj[p-m].push_back(p);
                }
                if(j>0&&!(s[i][j-1]!='#'||s[i][j-1]!='m')){
                        adj[p].push_back(p-1);
                        adj[p-1].push_back(p);
                }
            }
        }

        int mx=0,ans;
        for(int i = 0; i < v.size(); i++)
        {
            memset(vis,0,sizeof vis);
            ans=bfs(v[i],end);
            mx=max(ans,mx);
		}
        printf("Case %d: %d\n",ca,mx);
    }
    return 0;
}





