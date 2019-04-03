#include<bits/stdc++.h>
using namespace std;

int main()
{
    double k,n,s,p;
    cin>>k>>n>>s>>p;
    int m=n/s;
    if(n/s-m>0.00000001) m++;
    double tm=(k*m)/p;
    int ans=tm;
    if(tm-ans>0.00000001) ans++;
    cout<<ans<<endl;
}
