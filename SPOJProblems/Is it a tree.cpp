//Anik_Modak
#include<bits/stdc++.h>
#define MX 10005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
bool vis[MX];

void iddfs(int f)
{
    stack<int>st;
    st.push(f);
    while(!st.empty())
    {
        f = st.top();
        st.pop();
        vis[f] = 1;

        for(int i=0; i<adj[f].size(); i++)
        {
            int v = adj[f][i];
            if(!vis[v])
                st.push(v);
        }
    }
}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    if(m==n-1)
    {
        bool ck=false;
        mem(vis,0);
        iddfs(1);

        for(int i=1; i<=n; i++)
            if(!vis[i])
                ck=true;

        if(ck)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}





