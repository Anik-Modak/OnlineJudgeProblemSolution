//Anik_Modak
#include<bits/stdc++.h>
#define MAX 10
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dy[] = {1, -1,0};
int dx[] = {0, 0, -1};

string str="IEHOVA#";
char grid[MAX][MAX];
vector<int>ans;

int row, column, id=0;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column) return true;
    return false;
}

void dfs(int ux, int uy)
{
    ++id;
    for(int i=0; i<3; i++)
    {
        int vx = ux + dx[i];
        int vy = uy + dy[i];

        if(valid(vx, vy) && grid[vx][vy]==str[id])
        {
            ans.push_back(i);
           // cout<<str[id]<<" "<<dx[i]<<" "<<dy[i]<<endl;
            if(grid[vx][vy]=='#') return;
            dfs(vx, vy);
        }
    }
    return;
}

int main()
{
    int t,ca;
    // freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        cin>>row>>column;
        for(int i=0; i<row; i++)
            cin>>grid[i];

        int sx, sy;
        for(int i=0; i<row; i++)
            for(int j=0; j<column; j++)
                if(grid[i][j]=='@')
                    sx=i, sy=j;
        id=-1;
        dfs(sx,sy);

        for(int i=0; i<ans.size(); i++)
        {
            if(i==ans.size()-1)
            {
                if(ans[i]==0) cout<<"right"<<endl;
                else if(ans[i]==1) cout<<"left"<<endl;
                else cout<<"forth"<<endl;
            }
            else
            {
                if(ans[i]==0) cout<<"right ";
                else if(ans[i]==1) cout<<"left ";
                else cout<<"forth ";
            }
        }
        ans.clear();
    }
}
