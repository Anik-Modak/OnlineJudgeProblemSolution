//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,x,y,gcd,ans;
    cin>>a>>b>>x>>y;

    gcd=__gcd(x,y);
    x/=gcd;
    y/=gcd;

    ans=min(a/x,b/y);
    cout<<ans<<endl;
}

