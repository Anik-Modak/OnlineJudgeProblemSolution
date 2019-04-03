//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
#define INF INT_MAX
#define input() freopen("input.txt","r",stdin)
#define mx 100005
using namespace std;

int main()
{
    int n, m;
    scanf("%d",&n);

    ll arr[n+2];
    for(int i=1; i<=n; i++)
        scanf("%lld",&arr[i]);

    ll w, h, pre = 0, ans = 0;
    scanf("%d",&m);

    for(int i=1; i<=m; i++)
    {
        scanf("%lld%lld",&w, &h);
        ans = max(ans+pre, arr[w]);
        printf("%lld\n",ans);
        pre = h;
    }
    return 0;
}
