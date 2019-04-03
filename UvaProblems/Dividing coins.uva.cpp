//Anik_Modak
#include<bits/stdc++.h>
#define MSUM 50005
#define mem(x,y) memset(x,y, sizeof(x));
using namespace std;

int n, total;
int dp[105][MSUM], arr[105];

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(int n, int m)
{
    for(int i=0; i<=n; i++)
        for(int j=0; j<=m; j++)
            dp[i][j] = -1;
}

int subset(int i, int sum)
{
    //cout<<i<<" "<<sum<<" "<<dp[i][sum]<<endl;
    if(dp[i][sum] >= 0)
        return dp[i][sum];

    if(i==n)
    {
        int tmp = total - sum;
        return dp[i][sum] = abs(tmp-sum);
    }

    int left = subset(i+1, sum);
    int right = subset(i+1, sum+arr[i]);
    return dp[i][sum] = min(left, right);
}

int main()
{
    faster();
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        total = 0;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            total += arr[i];
        }

        init(n, total);
        int ans = subset(0,0);
        cout<<ans<<endl;
    }
    return 0;
}

