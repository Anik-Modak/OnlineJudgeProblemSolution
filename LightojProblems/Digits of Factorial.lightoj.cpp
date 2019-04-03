#include<bits/stdc++.h>
using namespace std;

double mp[1000005];

void fact()
{
    int i,n=1000000;
    double x=0;
    mp[0]=0;

    for(i=1; i<=n; i++)
    {
        x+=log10(i);
        mp[i]=x;
    }
}
int main()
{
    int i,t,n,b,ans;
    cin>>t;
    fact();
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&n,&b);
        ans=mp[n]/log10(b);
        printf("Case %d: %d\n",i,ans+1);
    }
    return 0;
}
