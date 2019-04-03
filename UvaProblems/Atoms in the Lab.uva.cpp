//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long double n, k, m;
        cin>>n>>k>>m;

        long long ans = log(m/n)/log(k);

        if(ans>0) cout<<ans<<endl;
        else cout<<0<<endl;
    }
}
