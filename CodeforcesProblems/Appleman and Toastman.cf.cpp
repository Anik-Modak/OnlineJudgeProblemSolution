#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n],i,m,s=0;

    for(i=0;i<n;i++){
        cin>>a[i];
        s=s+a[i];
    }
    sort(a,a+n);
    m=s;
    if(n>1) s=s*2;

    for(i=0;i<n-2;i++){
        m=m-a[i];
        s=s+m;
    }
    cout<<s<<endl;
}
