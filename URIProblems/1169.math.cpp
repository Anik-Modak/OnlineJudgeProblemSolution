#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long double i=1;
        while(n--) i*=2;
        long long ans=i/12000;
        cout<<ans<<" kg"<<endl;
    }
}
