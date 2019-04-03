//Anik_Modak
#include<bits/stdc++.h>
#define siz 250505
#define mem(x,y) memset(x,y,sizeof(x));
#define clr(x) for(int i = 0; i < siz; i++) x[i].clear();
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[siz];
bool vis[siz];
char s[505][505];
int ans[505][505];

int bfs(int source,int m)
{
    queue <int> vc;
    int a,b,c=0;

    vis[source]=1;
    vc.push(source);

    while(!vc.empty())
    {
        a=vc.front();

        int x,y;
        x=a/m;
        y=a%m;
        if(s[x][y]=='C') c++;

        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0){
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return c;
}

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1;ca<=t;ca++)
    {
        int n,m,q;
        cin>>n>>m>>q;
        mem(ans,-1);
        for(int i=0; i<n; i++) scanf("%s",s[i]);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int p=j+m*i;
                if(j<m-1&&(s[i][j]=='.'||s[i][j]=='C')&&(s[i][j+1]=='.'||s[i][j+1]=='C')){
                        adj[p].push_back(p+1);
                        adj[p+1].push_back(p);
                }
                if(i<n-1&&(s[i][j]=='.'||s[i][j]=='C')&&(s[i+1][j]=='.'||s[i+1][j]=='C')){
                        adj[p].push_back(p+m);
                        adj[p+m].push_back(p);
                }
            }
        }
        printf("Case %d:\n",ca);
        for(int i=0; i<q; i++)
        {
            int x,y,pos;
            scanf("%d%d",&x,&y);
            x--, y--;

            if(ans[x][y]!=-1) printf("%d\n",ans[x][y]);
            else{
                int cnt=0;
                mem(vis,0);

                pos=(y)+m*(x);
                cnt=bfs(pos,m);

                printf("%d\n",cnt);

                for(int i=0; i<n; i++)
                    for(int j=0; j<m; j++)
                    {
                         int p=j+m*i;
                         if(vis[p]) ans[i][j]=cnt;
                    }
            }
        }
        clr(adj);
    }
}







