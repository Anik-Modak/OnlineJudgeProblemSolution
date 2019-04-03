#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        long long s=1,m=1,ans;
        while(m<=n)
        {
            m=m<<1;
            s=s+m;
        }
        s-=m;
        ans=(n*(n+1))/2;
        ans=ans-2*s;
        cout<<ans<<endl;
    }
}
