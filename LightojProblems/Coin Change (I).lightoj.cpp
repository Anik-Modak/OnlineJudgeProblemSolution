//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100000007
using namespace std;

int solve( int a[],int b[], int n, int m )
{
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));

    dp[0][0] = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            for(int k=1; k<=b[i]; k++)
                if(j-k*a[i]>=0)
                    dp[i][j]+=dp[i-1][j-k*a[i]];
                   // printf("dp[%d][%d] = %d\n",i,j,dp[i][j]);
        for(int h=0; h<=m; h++)
            dp[i][h]=(dp[i][h]+dp[i-1][h])%MAX;
    }
    return dp[n][m];
}

int main()
{
    int t,ca,n,m;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d",&n,&m);
        int x[n],y[n],ans=1;

        for(int i=1; i<=n; i++)
            scanf("%d",&x[i]);
        for(int i=1; i<=n; i++)
            scanf("%d",&y[i]);

        ans=solve(x,y,n,m);
        printf("Case %d: %d\n",ca,ans);
    }
    return 0;
}


