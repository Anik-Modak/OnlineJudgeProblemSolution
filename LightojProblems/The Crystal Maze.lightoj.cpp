//Anik_Modak
#include<bits/stdc++.h>
#define MAX 550
#define mem(x,y) memset(x,y,sizeof(x));
#define pb(x) push_back(x)
using namespace std;

int dx[] = {1, -1 ,0, 0};
int dy[] = {0, 0, 1, -1};

bool visited[MAX][MAX];
char grid[MAX][MAX];
int ans[MAX][MAX];

int row, col,cry=0;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<col) return true;
    return false;
}

void dfs(int ux, int uy)
{
    visited[ux][uy] = true;
    if(grid[ux][uy]=='C') cry++;

    for(int i=0; i<4; i++)
    {
        int vx = ux + dx[i];
        int vy = uy + dy[i];

        if(valid(vx, vy) && !visited[vx][vy] && grid[vx][vy]!='#')
            dfs(vx, vy);
    }
    return;
}

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1;ca<=t;ca++)
    {
        int q;
        cin>>row>>col>>q;
        mem(ans,-1);
        for(int i=0; i<row; i++) scanf("%s",grid[i]);

        printf("Case %d:\n",ca);
        for(int i=0; i<q; i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            x--, y--;

            if(ans[x][y]!=-1) printf("%d\n",ans[x][y]);
            else{
                mem(visited,false);
                cry=0;
                dfs(x,y);
                printf("%d\n",cry);

                for(int i=0; i<row; i++)
                    for(int j=0; j<col; j++)
                        if(visited[i][j]) ans[i][j]=cry;
            }
        }
    }
}
