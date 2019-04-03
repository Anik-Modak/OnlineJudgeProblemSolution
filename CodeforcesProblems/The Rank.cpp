//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a,b,c,d,s[n+4];

    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c>>d;
        s[i]=a+b+c+d;
    }
    int ans=1, mx=s[1];
    for(int i=2; i<=n; i++)
    {
        if(s[i]>mx) ans++;
    }
    cout<<ans<<endl;
}
