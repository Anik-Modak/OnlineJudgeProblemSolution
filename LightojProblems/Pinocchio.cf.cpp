#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca,t;
    cin>>t;
    for(ca=1;ca<=t;ca++){
        int n,d=2,ans=0;
        cin>>n;

        int i,a[n];
        for(i=1;i<=n;i++) cin>>a[i];
        a[0]=2;
        for(i=1;i<=n;i++)
        {
            d=a[i]-a[i-1];
            if(d<0) continue;

            if(d%5==0) ans+=d/5;
            else ans+=d/5+1;
        }
        printf("Case %d: %d\n",ca,ans);
    }
    return 0;
}


