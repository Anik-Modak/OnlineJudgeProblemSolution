//Anik_Modak
#include<bits/stdc++.h>
#define input() freopen("input.txt","r",stdin);
using namespace std;

int main()
{
    //input();
    int t;
    cin>>t;

    while(t--)
    {
        int m, n, total=10005;
        cin>>m>>n;

        int arr[n+5], cnt=0;
        for(int i = 1; i <= n; i++) cin>>arr[i];

        int dp[total],mx=0;
        for(int i=1; i<=total; i++) dp[i]=total;

        dp[0]=0;
        for(int i = 1; i <= n; i++)
            for(int j = 10000; j > 0; j--)
                if(j - arr[i] >= 0 && dp[j - arr[i]] + 1 < dp[j])
                    dp[j] = dp[j - arr[i]] + 1 ;

        for(cnt=m; dp[cnt]==total; cnt++);

        cout<<cnt<<" "<<dp[cnt]<<endl;
    }
}

