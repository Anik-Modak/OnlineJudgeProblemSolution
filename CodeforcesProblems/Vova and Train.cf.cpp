//Anik_modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n, d, l, r, ans;
        cin>> n >>d >>l >>r;

        ans = (n/d)-(r/d-(l-1)/d);
        cout<<ans<<endl;
    }
}
