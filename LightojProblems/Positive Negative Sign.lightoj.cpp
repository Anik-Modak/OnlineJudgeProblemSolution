#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c;
    cin>>t;
    long long n,m,ans;
    for(c=1;c<=t;c++)
    {
        scanf("%lld%lld",&n,&m);
        ans=(n/2)*m;
        printf("Case %d: %lld\n",c,ans);
    }
}
