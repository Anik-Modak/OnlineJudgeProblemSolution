#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,k,mn,m,ans;
    cin>>n>>k;
    int id=1,i;
    for(i=1; i<=k; i++)
    {
        cin>>a;
        m=n%a;
        if(i==1){
            mn=m;
            ans=n/a;
        }
        else if(mn>m){
            mn=m;
            id=i;
            ans=n/a;
        }
    }
    if(!(n&&ans)) cout<<1<<" "<<0<<endl;
    else cout<<id<<" "<<ans<<endl;
}


