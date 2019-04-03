#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a,mx,mn;
    for(i=1;i<=n;i++) {
        cin>>a;
        if(a==1) mn=i;
        else if(a==n) mx=i;
    }
    mn=max(n-mn,mn-1);
    mx=max(n-mx,mx-1);
    if(mn>mx) cout<<mn<<endl;
    else cout<<mx<<endl;
}
