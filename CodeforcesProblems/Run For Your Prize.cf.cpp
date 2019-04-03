#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,ans,mx=0;
    cin>>n;
    while(n--){
        cin>>a;
        if(a-1<1000000-a) ans=a-1;
        else ans=1000000-a;
        if(ans>mx) mx=ans;
    }
    cout<<mx<<endl;
}


