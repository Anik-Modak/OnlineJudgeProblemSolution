//Anik_Modak
#include<bits/stdc++.h>
#define MX 205
using namespace std;

int N, Q, D, M;
int arr[MX], dp[MX][MX*21];

void init()
{
    for(int i=0; i<=N; i++)
        for(int j=0; j<=N*M; j++)
            dp[i][j] = -1;
}

void solve(int i,int take, int sum)
{
    if(take==M)
    {
        //if(sum) cout<<sum<<endl;
        dp[i][sum] = sum%D;
        return;
    }

    if(i==N || dp[i][sum] != -1)
        return;

    //if(sum>40000) cout<<sum<<endl;
    solve(i+1, take, sum);
    solve(i+1, take+1, sum+arr[i]);
}

int main()
{
    int cas = 0;
    freopen("input.txt","r",stdin);
    while(scanf("%d%d",&N,&Q) && N|Q)
    {
        for(int i=0; i<N; i++)
            scanf("%d",&arr[i]);

        printf("SET %d:\n",++cas);
        for(int k=1; k<=Q; k++)
        {
            scanf("%d%d",&D,&M);
            init();
            solve(0,0,0);

            int ans = 0;
            for(int i=0; i<=N; i++)
                for(int j=0; j<=N*M; j++)
                    if(dp[i][j]==0)
                       ans++;

            printf("QUERY %d: %d\n",k,ans);
        }
    }
    return 0;
}
