#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,t,c=0;
    cin>>n>>t;

    long long a[n],s=0;
    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(s<=t) c++;
        else s=s-a[i];
        if(s==t) break;
    }
    cout<<c<<endl;
}
