//Anik_Modak
#include<bits/stdc++.h>
#define MAX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {1, -1,0, 0};
int dy[] = {0, 0, 1, -1};

bool visited[MAX][MAX];
int lev[MAX][MAX];
char grid[MAX][MAX];

int row, column;
bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column)
        return true;
    return false;
}

int bfs(int x, int y)
{
    lev[x][y]=0;
    grid[x][y]='B';

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

            if(valid(vx, vy) && !visited[vx][vy] && grid[vx][vy]=='.')
            {
                lev[vx][vy]=lev[x][y]+1;
                visited[vx][vy]=1;
                q.push(pii(vx,vy));

                if(lev[vx][vy]%2==0) grid[vx][vy] = 'B';
                else grid[vx][vy] = 'W';
            }
        }
    }
}

int main()
{

    cin>>row>>column;
    getchar();

    for(int i=0; i<row; i++)
        gets(grid[i]);

    mem(visited,0);
    for(int i=0; i<row; i++)
        for(int j=0; j<column; j++)
            if(visited[i][j]==0 && grid[i][j]=='.')
                bfs(i,j);

    for(int i=0; i<row; i++)
        printf("%s\n",grid[i]);

    return 0;
}

