//Anik_Modak
#include<bits/stdc++.h>
#define MAX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {1, -1 ,0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

bool visited[MAX][MAX];
int lev[MAX][MAX];
char grid[MAX][MAX];

int ter, row, column;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column) return true;
    return false;
}

int bfs(int x,int y)
{
	lev[x][y]=0;
	queue<pii>q;
	q.push(pii(x,y));

	while(!q.empty())
	{
		pii top=q.front();
        q.pop();

        x=top.first;
        y=top.second;

		for(int i=0; i<8; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && !visited[vx][vy] && grid[vx][vy]!='#')
            {
				lev[vx][vy]=lev[x][y]+1;
				visited[vx][vy]=1;
				q.push(pii(vx,vy));
                if(grid[vx][vy]=='T')
                {
                    if(lev[vx][vy]<=ter) return 1;
                    return 0;
                }
			}

		}
	}
	return 0;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>ter>>row>>column;
        getchar();

        for(int i=0; i<row; i++) gets(grid[i]);

        int sx,sy;
        for(int i=0; i<row; i++)
            for(int j=0; j<column; j++)
                if(grid[i][j]=='S') sx=i, sy=j;

        mem(visited,0);
        mem(lev,0);

        if(bfs(sx,sy)) cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }
    return 0;
}

