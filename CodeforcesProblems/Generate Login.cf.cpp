//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, ans="";
    cin>>a>>b;

    ans+=a[0];
    for(int i=1; i<a.size(); i++)
    {
        if(a[i]<b[0]) ans+=a[i];
        else break;
    }
    ans+=b[0];
    cout<<ans<<endl;
}
