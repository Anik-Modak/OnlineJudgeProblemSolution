//Anik_Modak
#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull dp[101][101];
ull nCr(int n, int r)
{
    if(n==r || r==0) return dp[n][r] = 1;
    if(r==1) return dp[n][r] = (ull)n;

    if(dp[n][r]) return dp[n][r];
    return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

int main()
{
    int n, r;
    while(scanf("%d %d",&n,&r) && n|r)
    {
        ull ans = nCr(n,r);
        printf("%d things taken %d at a time is %llu exactly.\n",n, r, ans);
    }
    return 0;
}
