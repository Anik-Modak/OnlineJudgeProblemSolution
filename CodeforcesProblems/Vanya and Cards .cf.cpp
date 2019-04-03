#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,a,s=0;
    cin>>n>>x;
    while(n--){
        cin>>a;
        s+=a;
    }
    int ans=abs(s)/x;
    double d=(double)abs(s)/x;
    if(d-ans>0) ans++;
    cout<<ans<<endl;
}
