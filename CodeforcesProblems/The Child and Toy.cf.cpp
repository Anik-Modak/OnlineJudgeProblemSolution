//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int,itn>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a[n+2], x, y;
    for(int i=1; i<=n; i++)
        cin>>a[i];

    long long ans = 0;
    while(m--)
    {
        cin>>x>>y;
        ans += min(a[x], a[y]);
    }

    cout<<ans<<endl;
    return 0;
}
