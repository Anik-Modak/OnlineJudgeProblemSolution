#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a[n+5], b[n+5];

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];

    int x=a[m]+b[1], ib=n, ans=0;

    for(int i=1; i<=n; i++)
    {
        if(a[i]>x||i==m) continue;
        else
        {
            if(a[i]+b[ib]<=x)
            {
                ans++;
                ib--;
            }
        }
    }
    cout<<n-ans<<endl;
}
