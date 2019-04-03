#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,x;
    cin>>a>>b>>c;
    x=b-a;
    if(a==b) cout<<"YES"<<endl;
    else if(x*c>0&&x%c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
