#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;

    int a[n],d,mx=0,mn=100000000;
    for(i=0;i<n;i++) cin>>a[i];

    for(i=1; i<n-1; i++)
    {
        mx=0;
        for(j=1; j<n; j++)
        {
            if(j==i) d=a[j+1]-a[j-1];
            else if(j==i+1) continue;
            else d=a[j]-a[j-1];
            mx=max(d,mx);
        }
        mn=min(mn,mx);
    }
    cout<<mn<<endl;
}


