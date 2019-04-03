//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
#define ll long long
using namespace std;

int n;
ll dp[205][205],a[205][205];

ll solved(int r, int c)
{
        ll mx=0;
        if(dp[r][c]!=-1) return dp[r][c];

        if(r > 0 && r < n  && c > 0 && c <= n)
        {
            mx=max(mx,solved(r+1,c)+a[r][c]);
            mx=max(mx,solved(r+1,c+1)+a[r][c]);

            dp[r][c]=mx;
            return dp[r][c];
        }
        else if(r >= n  && r < 2 * n  && c > 0 && c <= n)
        {
            mx=max(mx,solved(r+1,c)+a[r][c]);
            mx=max(mx,solved(r+1,c-1)+a[r][c]);

            dp[r][c]=mx;
            return dp[r][c];
        }
        else return 0;
}

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        cin>>n;
        mem(a,0);
        mem(dp,-1);
        for(int i=1; i<2*n; i++)
        {
            if(i<=n){
                for(int j=1; j<=i; j++)
                    scanf("%lld",&a[i][j]);
            }
            else{
                for(int j=1; j<=2*n-i; j++)
                    scanf("%lld",&a[i][j]);
            }
        }
        ll ans=solved(1,1);
        printf("Case %d: %lld\n",ca,ans);
    }
}
