#include<iostream>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m;
    int a[n+1],i,d,ans=0;

    for(i=0; i<n; i++) cin>>a[i];

    for(i=1; i<n ;i++)
    {
        d=a[i-1]-a[i];
        if(d<0) continue;
        else d-=m;
        ans=max(ans,d);
    }
    cout<<ans<<endl;
}

