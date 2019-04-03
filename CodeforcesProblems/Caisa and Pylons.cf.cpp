#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ans;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ans=a[n-1];
    cout<<ans<<endl;
}
