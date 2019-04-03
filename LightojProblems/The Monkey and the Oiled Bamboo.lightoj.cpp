#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        cin>>n;
        long long i,a[n+5],ans,d,mx=0;
        a[0]=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
            d=a[i]-a[i-1];
            mx=max(mx,d);
        }
        ans=mx;
        for(i=1; i<=n; i++)
        {
            d=a[i]-a[i-1];
            if(mx==d) mx--;
            else if(mx<d){
                ans++; break;
            }
        }
        printf("Case %d: %lld\n",ca,ans);
    }
}





