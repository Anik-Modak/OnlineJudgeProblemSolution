#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long r,x,s,n;
    cin>>r>>x>>s;

    n=s-r;
    if(r>s||s==r+1) cout<<"NO"<<endl;
    else if(s==r) cout<<"YES"<<endl;
    else if(n%x==0||n%x==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


