#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n,ans=0;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        ans=ans+(m+i)/5;
        if(i>=5) ans-=i/5;
    }
    cout<<ans<<endl;
}
