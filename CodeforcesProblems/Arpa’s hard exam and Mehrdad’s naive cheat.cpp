#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans;
    cin>>n;
    if(n==0) ans=1;
    else{
        if(n%4==1) ans=8;
        else if(n%4==2) ans=4;
        else if(n%4==3) ans=2;
        else ans=6;
    }
    cout<<ans<<endl;
}

