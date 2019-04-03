//Anik_Modak
#include<bits/stdc++.h>
#define MX 10005
#define INF INT_MAX
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pb(x) push_back(x)
using namespace std;

struct edge
{
    int u, v, c;
    edge(int a,int b,int co)
    {
        u=a;
        v=b;
        c=co;
    }
};

int par[MX];
vector<edge>vec;

int comp(edge a,edge b)
{
    return a.c<b.c;
}

int set_find(int a)
{
    if(a==par[a]) return a;
    return(par[a]=set_find(par[a]));
}

void link(int x,int y)
{
    if(x>y) par[y]=x;
    else par[x]=y;
}

int mst(int n)
{
    int ans=0;
    for(int i=0; i<=n; i++) par[i]=i;

    for(int i=0; i<vec.size(); i++)
    {
        int x=set_find(vec[i].u);
        int y=set_find(vec[i].v);
        if(x!=y)
        {
            link(x,y);
            ans += vec[i].c;
        }
    }
    return ans;
}

int main()
{
    int tst, cs;
    scanf("%d",&tst);

    for(cs=1; cs<=tst; cs++)
    {
        int n, m, ac;
        scanf("%d %d %d",&n,&m,&ac);

        for(int j=0; j<m; j++)
        {
            int a, b, c;
            scanf("%d %d %d",&a,&b,&c);
            if(c<ac) vec.push_back(edge(a,b,c));
        }

        sort(vec.begin(),vec.end(),comp);
        int ans= mst(n);

        int cnt=0;
        for(int i=1; i<=n; i++)
            if(par[i]==i) cnt++;

        printf("Case #%d: %d %d\n",cs,ans+(cnt*ac),cnt);
        vec.clear();
    }
    return 0;
}
