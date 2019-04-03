#include<bits/stdc++.h>

#define pb push_back

using namespace std;

const int N = 10005;

int n, c[N], clr[N], ans = 1;
vector <int> adj[N];
bool mark[N];

void DFS(int v)
{
    mark[v] = true;
    for(int i = 0; i < (int)adj[v].size(); i ++)
    {
        int u = adj[v][i];
        cout<<u<<endl;
        if(!mark[u])
        {
            clr[u] = clr[v];
            if(clr[u] != c[u])
            {
                ans ++;
                clr[u] = c[u];
            }
            DFS(u);
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i < n; i ++)
    {
        int a;
        cin >> a;
        a --;
        adj[a].pb(i);
        adj[i].pb(a);
    }
    for(int i = 0; i < n; i ++) cin >> c[i];

    clr[0] = c[0];
    DFS(0);
    cout << ans << endl;
    return 0;
}
