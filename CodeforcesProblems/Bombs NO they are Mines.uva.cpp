//Anik_Modak
#include<bits/stdc++.h>
#define MAX 1005
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};

bool vis[MAX][MAX];
int lev[MAX][MAX];

int col, row;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<col) return true;
    return false;
}

int bfs(int x, int y, int ex, int ey)
{
	lev[x][y]=0;
	if(x==ex && y==ey) return lev[x][y];

	queue<pii>q;
	q.push(pii(x,y));

	while(!q.empty())
	{
		pii top=q.front();
        q.pop();

        x=top.first;
        y=top.second;

		for(int i=0; i<4; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && !vis[vx][vy])
            {
				lev[vx][vy]=lev[x][y]+1;
				vis[vx][vy]=1;
				q.push(pii(vx,vy));
                if(vx==ex && vy==ey) return lev[vx][vy];
			}
		}
	}
	return 0;
}

int main()
{
    while(cin>>row>>col)
    {
        mem(vis,0);
        if(row==0&&col==0) break;

        int a, b, n, m;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>a>>m;
            while(m--)
            {
                cin>>b;
                vis[a][b]=1;
            }
        }

        int sx, sy, ex, ey;
        cin>>sx>>sy>>ex>>ey;

        int ans = bfs(sx,sy,ex,ey);
        cout<<ans<<endl;
    }
    return 0;
}


