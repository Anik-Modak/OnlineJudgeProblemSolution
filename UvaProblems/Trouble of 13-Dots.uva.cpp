//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
using namespace std;

int dp[MX][15005];
int N, M, p[MX], f[MX];

void init()
{
    for(int i=0; i<=N; i++)
        for(int j=0; j<=M+200; j++)
            dp[i][j] = -1;
}

int solve(int i, int cost)
{
    if(i==N)
    {
        if(cost <= M)
            return dp[i][cost] = 0;
        else if(cost>2000 && cost<=M+200)
            return 0;
        else
            return -2000;
    }

    if(dp[i][cost] != -1)
       return dp[i][cost];

    int left, right;
    left = solve(i+1, cost);

    if(cost + p[i] <= M+200)
        right = solve(i+1,cost+p[i]) + f[i];
    else
        right = -2000;
    return dp[i][cost] = max(left, right);
}

int main()
{
    //freopen("input.txt","r",stdin);
    while(scanf("%d%d",&M,&N)==2)
    {
        for(int i=0; i<N; i++)
            scanf("%d %d",&p[i],&f[i]);

        init();
        int ans = solve(0, 0);
        printf("%d\n",ans);
    }
    return 0;
}
