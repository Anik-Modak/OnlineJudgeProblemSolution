#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans;
    cin>>n;
    long long a[n],i,s=0;

    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ans=0;
    for(i=0;i<n;i++)
    {
        if(s>a[i]) continue;
        else ans++;
        s=s+a[i];
    }
    cout<<ans<<endl;
}
