//Anik_Modak
#include<bits/stdc++.h>
#define MAX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {1, -1,0, 0};
int dy[] = {0, 0, 1, -1};

bool visited[MAX][MAX];
char grid[MAX][MAX];

int row, column;
bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column)
        return true;
    return false;
}

vector<pii> v[3];
int bfs(int n, int x, int y, int ex, int ey)
{
    queue<pii>q;
    q.push(pii(x,y));

    while(!q.empty())
    {
        pii top=q.front();
        q.pop();

        x=top.first;
        y=top.second;

        if(x==ex && y==ey) return 1;
        v[n].push_back({x+1,y+1});

        for(int i=0; i<4; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && !visited[vx][vy] && grid[vx][vy]=='0')
            {
                visited[vx][vy]=1;
                q.push(pii(vx,vy));
            }
        }
    }
    return 0;
}

int main()
{
    cin>>row;
    column = row;

    int sx, sy, ex, ey;
    cin>>sx>>sy>>ex>>ey;

    getchar();
    for(int i=0; i<row; i++)
        gets(grid[i]);

    mem(visited,0);
    if(bfs(0,sx-1,sy-1,ex-1,ey-1)) cout<<0<<endl;
    else
    {
        long long mn = LONG_MAX, houdai= bfs(1,ex-1,ey-1,sx-1,sy-1);
        for(int i=0; i<v[0].size(); i++)
        {
            for(int j=0; j<v[1].size(); j++)
            {
                long long a = abs(v[0][i].first - v[1][j].first);
                long long b = abs(v[0][i].second - v[1][j].second);
                mn = min(mn, a*a + b*b);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}


