#include<bits/stdc++.h>
#define MX 100009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
map<string, int> si ;
map<int,string> is ;
vector<int>adj[MX];
int parent[MX] ;

string path(int s, int des)
{
    vector<int>path ;
    string w ;

    for(int v=des ; v!=-1 ; v=parent[v])
        path.push_back(v) ;

    reverse(path.begin(),path.end()) ;

    w = w + is[s][0] ;
    for(int i=1 ; i<path.size() ; i++)
        w = w + is[path[i]][0] ;
    return w ;
}

bool BFS(int s,int des)
{
    queue<int>q ;

    vis[s] = 1 ;
    parent[s] = -1 ;
    q.push(s) ;

    while(!q.empty())
    {
        int a, b ;
        a = q.front() ;
        q.pop() ;

        for(int i=0 ; i<adj[a].size() ; i++)
        {
            b = adj[a][i] ;
            if(vis[b]==0)
            {
                parent[b] = a ;
                vis[b] = 1 ;
                q.push(b) ;
                if(b==des) return 1 ;
            }
        }
    }
    return 0 ;
}

int main()
{
    int cas, j = 0 ;
    cin >> cas ;

    while(j<cas)
    {
        if(j) cout<<endl;

        int edge, query, index = 0 ;
        cin >> edge >> query ;

        for(int i=0 ; i<edge ; i++)
        {
            string a, b ;
            cin >> a >> b ;
            if(si[a]==0)
            {
                si[a] = ++index ;
                is[index] = a ;
            }
            if(si[b]==0)
            {
                si[b] = ++index ;
                is[index] = b ;
            }
            adj[si[a]].push_back(si[b]) ;
            adj[si[b]].push_back(si[a]) ;
        }

        for(int i=0 ; i<query ; i++)
        {
            string source, dest ;
            cin >> source >> dest ;

            mem(vis,0) ;
            bool p = BFS(si[source],si[dest]) ;
            cout<<path(si[source],si[dest])<<endl ;
        }

        j++ ;
        Clear(adj) ;
        is.clear();
        si.clear();
    }
}
