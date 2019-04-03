//Anik_Modak
#include<bits/stdc++.h>
#define MAX 10
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {2, 2 ,-2, -2, 1, 1, -1, -1};
int dy[] = {-1, 1, -1, 1, 2, -2, 2, -2};

bool vis[MAX][MAX];
int lev[MAX][MAX];

bool valid(int x, int y)
{
    if(x>=0 && x<8 && y>=0 && y<8) return true;
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

		for(int i=0; i<8; i++)
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
    char c1, c2;
    int r1, r2;

   // freopen("input.txt","r",stdin);

    while(cin>>c1>>r1>>c2>>r2)
    {
        mem(vis,0);
        int ans = bfs(c1-'a',r1-1,c2-'a',r2-1);
        printf("To get from %c%d to %c%d takes %d knight moves.\n",c1,r1,c2,r2,ans);
    }
}

