#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,p=0;
    cin>>n;
    long long a[n];

    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-2;i++) if(a[i]+a[i+1]>a[i+2]){ p=1; break;}

    if(p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
