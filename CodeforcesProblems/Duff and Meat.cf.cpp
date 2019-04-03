#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,id,p=0;
    cin>>n;
    int i,a[n],b[n];
    for(i=0; i<n; i++) cin>>a[i]>>b[i];

    long long mn,ans=0;
    for(i=0; i<n; i++)
    {
        if(i==0) mn=b[i];
        if(mn>b[i]) mn=b[i];

        ans=ans+(mn*a[i]);
    }
     cout<<ans<<endl;
}

